#include "main.h"

/**
 * prime - Entry point
 * description: checks if number is divisible
 * @a: integer
 * @b: integer
 *
 * Return: integer
 */

int prime(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);

	else if (a > b / 2)
		return (1);

	else
		return (prime(a + 1, b));
}

/**
 * is_prime_number - Entry point
 * description: check if number is prime
 * @n: integer
 *
 * Return: integer
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);

	return (prime(2, n));
}
