#include "main.h"

/**
 * _isdigit - This checks for a digit from 0 to 9
 * @c: This is the variable
 * Return: return 1 if c is a digit else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
