#include "main.h"
#include <stdio.h>

/**
 * _isalpha - Entry point
 * descriiption: checks for alphabetic character
 *
 * @c: variable
 * Return: 1 if c is an alphabet and 0 if otherwise
 */

int _isalpha(int c)
{
        int a, b;

        for (a = 'a'; a <= 'z'; a++)
        {
                for (b = 'A'; b <= 'Z'; b++)
                {
                        if ((c == a) || (c == b))
                                return 1;
                }
        }
        return 0;
}
