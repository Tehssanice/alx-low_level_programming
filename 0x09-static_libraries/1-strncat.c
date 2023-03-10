#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @src: The source of strings
 * @dest: The destination of the string
 * @n: The length of int
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (c = 0; src[c] != '\0' && c < n; c++)
	{
		dest[i + c] = src[c];
	}
	dest[i + c] = '\0';
	return (dest);
}
