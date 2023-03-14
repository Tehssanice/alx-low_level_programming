#include <stdio.h>

/**
 * main - Entry point
 * description: This program prints the alphabet in lowercase.
 *
 * Return: 0
 */

int main()
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		putchar(alphabets);

	putchar('\n');

	return (0);
}
