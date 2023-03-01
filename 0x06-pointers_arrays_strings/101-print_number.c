#include "main.h"

/**
  * print_number - Prints an integer
  * @n: Number to prints
  *
  * Return: Nothing
  */

void print_number(int n)
{
	unsigned int c;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	c = n;

	if (c / 10)
		print_number(c / 10);

	_putchar(c % 10 + '0');
}
