#include <stdio.h>

/**
 * main - Entry point
 * description: prints numbers of base 16
 *
 * Return: 0
 */

int main()
{
        char b, c;

        for(b = 0; b < 10; b++)
                putchar('0' + b);

        for(c = 'a'; c <= 'f'; c++)
                putchar(c);

        putchar('\n');

        return 0;
}
