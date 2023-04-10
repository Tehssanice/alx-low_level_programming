#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to strings of 0 and 1 chars
 *
 * Return: 0 or the converted number
 */

unsigned int binary_to_unit(const char *b)
{
	unsigned int number = 0;
	int length = 0;

	if (b[length] == '\0')
		return (0);

	while ((b[length] == '0') || (b[length] == '1'))
	{
		number <<= 1;
		number += b[length] - '0';
		length++;
	}

	return (number);
}
