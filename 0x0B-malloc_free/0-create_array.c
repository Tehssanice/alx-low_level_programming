#include <stdlib.h>
#include "main.h"

/**
 * create_array - Entry point
 * description: creates an array of chars
 * @c: variable
 * @size: size of the memory to print
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = (char *)malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
