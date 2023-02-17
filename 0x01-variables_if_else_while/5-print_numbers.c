#include <stdio.h>
#include <unistd.h>
/**
 * main - This program prints all single digit numbers of base 10 from 0
 * Return: Always 0 (success)
*/
int main(void)
{
	int b;

	for (b = 0; b < 10; b++)
	{
		printf("%d", b);
	}
	putchar('\n');
	return (0);
}
