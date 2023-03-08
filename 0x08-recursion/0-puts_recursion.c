#include "main.h"

/**
 * _puts_recursion - Entry point
 * description: This prints a string
 * @s: variable
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
