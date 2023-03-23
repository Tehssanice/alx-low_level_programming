#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @n: variable
 * @separator: separator between two numbers
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list x;

	va_start(x, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(x, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(x);
}
