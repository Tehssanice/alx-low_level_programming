#include "main.h"
#include <stdio.h>

/**
 * print_array - Entry point
 * description: prints n element of an array of integers
 * @a: variable
 * @n: variable
 * Return: 0
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
		if (x != n - 1)
		printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
	printf("\n");
}
