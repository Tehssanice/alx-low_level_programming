#include "main.h"

/**
 * _strstr - Entry point
 *
 * description: locates a substring
 *
 * @needle: variable
 *
 * @haystack: variable
 *
 * Return: 0
 *
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, c = 0;

	while (haystack[i])
	{
		while (needle[c] && (haystack[i] == needle[0]))
		{
			if (haystack[i + c] == needle[c])
				c++;
			else
				break;
		}
		if (needle[c])
		{
			i++;
			c = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
