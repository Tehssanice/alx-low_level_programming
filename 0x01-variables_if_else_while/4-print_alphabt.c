#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - Entry point 
 * description: prints alphabets in lowercase except q and e
 * 
 * Return: 0
 */

int main()
{
        char a;

        for (a = 'a'; a <= 'z'; a++)
        {
                if (a != 'q' && a != 'e')

                        putchar(a);
        }

        putchar('\n');

        return 0;
}
