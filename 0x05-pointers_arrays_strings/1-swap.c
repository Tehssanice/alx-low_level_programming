#include "main.h"

/**
 * swap_int - Enry point
 * description: swaps the values of two integers
 * @a: variable
 * @b: variable
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
