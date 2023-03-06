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
	int b = 0, c, d;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] != 32)
		{
			for (d = 0; accept[d] != '\0'; d++)
			{
				if (s[d] == accept[d])
					b++;
			}
		}
		else
			return (b);
	}
		return (b);
}
