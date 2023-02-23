#include "main.h"

/**
 * print_numbers - This prints numbers 0 - 9
 *
 * Return: void
 */

void print_numbers(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
	_putchar(ch);
	}
	_putchar('\n');
}
