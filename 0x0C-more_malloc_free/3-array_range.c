#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Entry point
 * description: creates an array of integers
 * @min: variable
 * @max: variable
 *
 * Return: pointer or NULL
 */

int *array_range(int min, int max)
{
	int i, s, *arr;


	if (min > max)
		return (NULL);

	s = max - min + 1;

	arr = malloc(sizeof(int) * s);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < s; i++)
		arr[i] = min++;

	return (arr);
}

