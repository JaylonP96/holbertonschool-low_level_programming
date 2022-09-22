#include "main.h"

/**
 * print_numbers - prints 0 through 9 with a new line.
 * @i: int for numbers
 * Return: Always 0
 */

void print_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		_putchar(i);
	}
	{
		_putchar('\n');
	}
}
