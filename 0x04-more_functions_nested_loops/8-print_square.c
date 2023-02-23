#include "main.h"

/**
 * print_square - check for a digit
 * @n: number of _ to be printed
 * Return: void
 */

void print_square(int n)
{
	int i, b;

	if (n <= 0)
		_putchar('\n');

	for (i = 0; i < n; i++)
	{
		for (b = 0; b < (n); b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}

