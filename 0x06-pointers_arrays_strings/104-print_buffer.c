#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer 10
 * @b: The buffer to be printed.
 * @size: The number of bytes to be printed from the buffer
 *
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int c, i;

	for (c = 0; c < size; c += 10)
	{
		printf("%08x: ", c);

		for (i = 0; i < 10; i++)
		{
			if ((i + c) >= size)
				printf("  ");
			else
				printf("%02x", *(b + i + c));
			if ((i % 2) != 0 && i != 0)
				printf(" ");
		}
		for (i = 0; i < 10; i++)
		{
			if ((i + c) >= size)
				break;
			else if (*(b + i + c) >= 31 &&
				 *(b + i + c) <= 126)
				printf("%c", *(b + i + c));
			else
				printf(".");
		}
		if (c >= size)
			continue;
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
