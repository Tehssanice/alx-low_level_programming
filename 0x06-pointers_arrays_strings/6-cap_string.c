#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string
 * Return: str
 */

char *cap_string(char *str)
{
	int i = 0, c;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(str + i))
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			if (i == 0)
				*(str + i) -= 'a' - 'A';
			else
			{
				for (c = 0; c <= 12; c++)
				{
					if (a[c] == *(str + i - 1))
						*(str + i) -= 'a' - 'A';
				}
			}
		}
		i++;
	}
	return (str);
}
