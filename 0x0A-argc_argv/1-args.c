#include <stdio.h>

/**
 * main - Entry point
 * description: Prints the number of arguments passed into main
 * @argc: Number of command line arguments
 * @argv: variable
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
