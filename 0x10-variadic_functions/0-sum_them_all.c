#include "variadic_functions.h"

/**
 * sum_them_all - adds all the numbers
 * @n: variable
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list x;

	va_start(x, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(x, int);

	va_end(x);

	return (sum);
}
