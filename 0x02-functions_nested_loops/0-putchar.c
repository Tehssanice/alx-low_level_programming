#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * description: prints _putchar
 *
 * Return: 0
 */

int main()
{
        char string[] = "_putchar\n";

        int i;
        char a;

        for(i = 0; i < sizeof(string); i++)
        {
                if(string[i] != '\0')
                {
                        a = string[i];

                        putchar(a);
                }
        }
        return 0;
}

