#include "main.h"

/**
 * check - Entry point
 * descritpion: checks for the square root
 * @a: integer
 * @b: integer
 *
 * Return: integer
 */

int check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check(a + 1, b));
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
	return (check(1, n));
}
