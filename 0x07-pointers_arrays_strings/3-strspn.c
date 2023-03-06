#include "main.h"

/**
 * _strspn - Entry point
 * description: gets the length of a prefix substring
 * @s: variable
 * @accept: variable
 *
 * Return: b
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}

			else if (accept[index + 1] == '\0')
				return (bytes);
		}

		s++;
	}

	return (bytes);
}

