#include <stdio.h>

/**
 * main - Entry point
 * description: prints numbers
 *
 * Return: 0
 */

int main ()
{
        int b;

        for(b = 0; b <= 9; b++)
        {
                putchar('0' + b);
                putchar('\n');
        }
}
