#include "main.h"
#include <stdio.h>

/**
 * _abs - Entry point
 * description: computes the absolute value of an integer
 *
 * Return: 0
 */

int _abs(int n)
{
        if (n >= 0)
                return (n);
        else
                return (-n);

        putchar(n);
        return 0;
}

