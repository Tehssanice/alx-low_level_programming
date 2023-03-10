#include "main.h"
#include <stdlib.h>

/**
 * _isupper - This function checks for  uppercase character
 * @c: carrier integer variable
 * Return: 1 if c is uppercae and 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
