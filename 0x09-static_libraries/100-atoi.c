#include "main.h"

/**
 * _atoi - Entry point
 * description: convert a string to an integer.
 * @s: variable
 *
 *Return: An integer
 */

int _atoi(char *s)
{
	int c = 1;
	unsigned int ui = 0;

	do {

		if (*s == '-')
			c *= -1;

		else if (*s >= '0' && *s <= '9')
			ui = (ui * 10) + (*s - '0');

		else if (ui > 0)
			break;
	} while (*s++);

	return (ui * c);
}
