#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int len = 0, i;

	while (s[i++])
		len++;

	for (index = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
