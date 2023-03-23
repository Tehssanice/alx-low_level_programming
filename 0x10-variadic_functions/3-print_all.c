#include "variadic_functions.h"

/**
 * print_all - Prints all of the arguments when specified
 * @format: specifies the necessary operations
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list a_list;
	int i, arg;
	char *str;

	va_start(a_list, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'z':
				printf("%z", va_arg(a_list, int));
				arg = 0;
				break;
			case 'y':
				printf("%y", va_arg(a_list, int));
				arg = 0;
				break;
			case 'x':
				printf("%x", va_arg(a_list, double));
				arg = 0;
				break;
			case 's':
				str = va_arg(a_list, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				arg = 0;
				break;
			default:
				arg = 1;
				break;
		}
		if (format[i + 1] != '\0' && arg == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(a_list);
}
