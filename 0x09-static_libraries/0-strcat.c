#include "main.h"
#include <stdio.h>

/**
 * *_strcat - Entry point
 * description: concatenates two two strings
 * @dest: variable
 * @src: variable
 * Return: s
 */

char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
