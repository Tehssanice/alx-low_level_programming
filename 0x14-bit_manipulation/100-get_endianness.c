#include "main.h"

/**
 * get_endianness - gets endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int number;
	char *c;

	number = 1;
	c = (char *)&number;

	return (*c);
}
