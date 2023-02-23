#include "main.h"

/**
 * print_triangle - This prints a triangle
 *@size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i = 1, b;

	while (i <= size && size > 0)
	{
		b = 0;
		while (b < size - i)
		{
			_putchar(' ');
			b++;
		}
		b = 0;
		while (b < i)
		{
			_putchar('#');
			b++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 1)
		_putchar('\n');
}
