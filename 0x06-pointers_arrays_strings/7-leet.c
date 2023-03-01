#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to encode
 *
 * Return: str
 */

char *leet(char *str)
{
	int i, c;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; *(str + i); i++)
	{
		for (c = 0; c <= 9; c++)
		{
			if (a[c] == str[i])
				str[i] = b[c];
		}
	}
	return (str);
}
