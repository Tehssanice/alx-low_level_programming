#include "main.h"

/**
 * string_toupper - Changes all lowercase letters
 * to uppercase
 * @str: variable
 *
 * Return: str
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}

