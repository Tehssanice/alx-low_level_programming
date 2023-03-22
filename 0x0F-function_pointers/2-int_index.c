#include "function_pointers.h"

/**
 * int_index - searches for integers in an array of integers
 * @array: variable
 * @size: variable
 * @cmp: variable
 *
 * Return: -1 if size is less than or equal to 0
 * otherwise return i.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
					return (i);
			}
		}
	}
	return (0);
}
