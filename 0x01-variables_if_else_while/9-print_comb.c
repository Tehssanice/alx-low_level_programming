#include <stdio.h>

/**
 * main - Entry point
 * description: prints possible combinations of single
 * digit numbers
 *
 * Return: 0
 */

int main()
{
        int c;

        for(c = 0; c < 10; c++)
        {
                putchar('0' + c);

                if(c != 9)
                putchar(',');
        }

        putchar('\n');

        return 0;
}
