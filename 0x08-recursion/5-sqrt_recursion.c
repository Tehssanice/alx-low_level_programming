#include "main.h"

/**
 * check_sqrt - Entry point
 * descritpion: checks for the square root
 * @a: integer
 * @b: integer
 *
 * Return: integer
 */

int check_sqrt(int a, int b)
{
	if (a * a == b)
		return (a);

	if (a * a > 2)
		return (-1);

	return (check_sqrt(a + 1, b));
}

/**
 * _sqrt_recursion - Entry point
 * description: returns the natural square root of a number
 * @n: integer
 *
 * Return: natural square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	return (check_sqrt(1, n));
}
