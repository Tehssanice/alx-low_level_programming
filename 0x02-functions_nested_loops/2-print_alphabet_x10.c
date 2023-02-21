#include "main.h"

/**
 * prints the alphabet x10 - this program prints the alphabet x10
 * followed by a new line
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;
	
	while(i < 10)
	{
		ch ='a';
			while (ch <= 'z')
			{
				_putchar(ch);
				ch++;
			}
		_putchar('\n');
		i++;
	}
}

