#include "main.h"

/**
 * factorial - Entry point
 * description: factorial of int
 * @n: varaible
 *
 * Return: integer
 */

int factorial(int n)
{
	int x;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		x = n * factorial(n - 1);
	}
			return (x);

}
