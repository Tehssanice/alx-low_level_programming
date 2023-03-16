#include <stdio.h>

/**
 * main - Entry point
 * description: prints alphabets in reverse
 *
 * Return: 0
 */

int main ()
{
        char b;

        for(b = 'z'; b >= 'a'; b--)

                putchar(b);

        putchar('\n');

        return 0;
}
