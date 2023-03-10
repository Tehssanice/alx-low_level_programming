#include "main.h"

/**
 * _puts - Entry point
 * description: function that prints a string
 *@str: variable
 * Return: 0
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
