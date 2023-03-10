#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * description: prints the minimum number of coins
 * @argc: variable
 * @argv: variable
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n, ch, result;

	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}

	n = atoi(argv[1]);

	result = 0;

	if (n < 0)
	{
		printf("0\n");

		return (0);
	}

	for (ch = 0; ch < 5 && n >= 0; ch++)
	{
		while (n >= coins[ch])
		{
			result++;

			n -= coins[ch];
		}
	}

	printf("%d\n", result);

	return (0);
}
