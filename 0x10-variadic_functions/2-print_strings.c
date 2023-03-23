#include "variadic_functions.h"

/**
 * print_strings - Prints strings
 * @separator: empty strings
 * @n: number of unnamed parameters
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list x;
  char *str;

	va_start(x, n);
	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		str = va_arg(x, char*);

		if (str == NULL)
			str = "(nil)";
		printf("%s", str);

		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(x);
}
