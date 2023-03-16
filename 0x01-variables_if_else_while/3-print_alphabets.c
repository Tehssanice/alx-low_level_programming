#include <stdio.h>

/**
 * main - Entry point
 * description: prints alphabets in lower and uppercase
 *
 * Return: 0
 */

int main ()
{
        char a, b;

        for(a = 'a'; a <= 'z'; a++)

        putchar(a);

        for(b = 'A'; b <= 'Z'; b++)

        putchar(b);

        putchar('\n');

        return 0;
}
