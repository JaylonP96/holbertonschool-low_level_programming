#include "main.h"
/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int len = 0, i;

	while (s[len++] != '\0')
		;
	for (i = len - 2; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
