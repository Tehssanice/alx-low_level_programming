#include "main.h"

/**
 * print_diagonal - This prints diagonal lines
 * @n: variable
 *
 * Return: void
 */


void print_diagonal(int n)
{
	int i, b;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (b = 0; b < i; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

}

