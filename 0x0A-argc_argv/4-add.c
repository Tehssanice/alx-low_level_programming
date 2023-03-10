#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * decription: adds positive numbers.
 * @argc: variable
 * @argv: variable
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i, num, sum = 0;
	char *positive;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; argv[i]; i++)
	{
		num = strtol(argv[i], &positive, 10);
		if (*positive)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += num;
		}
	}
	printf("%d\n", sum);

	return (0);
}
