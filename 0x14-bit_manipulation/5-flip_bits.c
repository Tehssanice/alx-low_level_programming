#include "main.h"

/**
 * flip_bits - flips to get from one number to another
 * @n: number
 * @m: number n is flipped to
 *
 * Return: number of bits required to flip to get from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
