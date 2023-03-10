#include <unistd.h>

/**
 * _putchar - Entry point
 * description: prints
 *
 * Return: 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
