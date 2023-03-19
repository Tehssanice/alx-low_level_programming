#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - Entry point
 * description: prints the alphabets x10 in lowercase
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
        char c;
        int i;

        for(i = 0; i <= 10; i++)
        {
                for(c = 'a'; c <= 'z'; c++)
                {
                        _putchar(c);
                }

                _putchar('\n');
        }
}
