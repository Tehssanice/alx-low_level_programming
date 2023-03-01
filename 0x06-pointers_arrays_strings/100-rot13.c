#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string to encode
 *
 * Return: str
 */

char *rot13(char *str)
{
	int i, c;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(s + i); i++)
	{
		for (c = 0; c < 52; c++)
		{
			if (a[c] == *(str + i))
			{
				*(str + i) = b[c];
				break;
			}
		}
	}
	return (str);
}
