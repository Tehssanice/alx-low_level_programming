#include <stdio.h>

/**
 * main -Entry point
 * description: prints the name of the program
 * @argc: numbers arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
