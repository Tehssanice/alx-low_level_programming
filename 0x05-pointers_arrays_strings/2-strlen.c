#include "main.h"

/**
 * _strlen - Entry point
 * description: returns the length of a string
 *@s: variable 
 * Return: 0
 */

int _strlen(char *s)
{
	int len = 0;

	while(s[len])
		len++;
	return (len);
}
