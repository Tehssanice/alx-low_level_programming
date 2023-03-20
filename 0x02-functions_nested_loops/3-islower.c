#include "main.h"
#include <stdio.h>

/**
 * _islower - Entry point
 * description: checks for a lowercase character
 * @c: variable
 *
 * Return: 1 if true or 0 otherwise
 */

int _islower(int c)
{
        int i;

        for (i = 'a'; i <= 'z'; i++)
        {
                if (c == i)
                {
                        return 1;
                }
                else{
                        return 0;
                }
        }
        return 0;
}
