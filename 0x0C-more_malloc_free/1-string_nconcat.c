#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 **string_nconcat - a function that concatenates two strings.
 *@s1 : pointer to string
 *@s2 : pointer to string
 *@n : integer
 *Return: pointer to string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{



	unsigned int x1, i, j;
	char *s;
	char *no = malloc(2);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (x1 = 0; s1[x1] != '\0'; x1++)
	;
	s = malloc(sizeof(char) * (x1 + n + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = x1; j < x1 + n; j++)
		s[j] = s2[j - x1];
	s[j] = '\0';
	free(no);
	return (s);
}
