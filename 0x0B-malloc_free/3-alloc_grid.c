#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * alloc_grid - Entry point
 * description: returns a pointer
 * @width: variable
 * @height: variable
 *
 * Return: 0 on failure
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, c;

	if (height <= 0 || width  <= 0)

		return (NULL);

	arr = (int **)malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (c = 0; c < i; c++)
				free(arr[c]);
			free(arr);

			return (NULL);
		}
		for (c = 0; c < width; c++)
		{
			arr[i][c] = 0;
		}
	}

	return (arr);
}
