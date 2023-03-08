#include "main.h"

/**
 * _strlen - Entry point
 * descriptuon: Prints the length of a string.
 * @s: variable
 *
 * Return: string length
 */

int _strlen(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen(s + 1));

	return (0);
}

/**
 * palindrome_checker - Entry point
 * description: check if string is palindrome
 * @s: variable
 * @i: variable
 * @c: variable
 *
 * Return: 1 if string is palindrome, or 0 if not
 */

int palindrome_checker(char *s, int i, int c)
{
	if (s[i] == s[c])
		if (i > c / 2)
			return (1);
		else
			return (palindrome_checker(s, i + 1, c - 1));
	else
		return (0);
}

/**
 * is_palindrome - Entry point
 * description: check if string is a palindrome
 * @s: variable
 *
 * Return: 1 if string is prime, 0 if not
 */

int is_palindrome(char *s)
{
	return (palindrome_checker(s, 0, _strlen(s) - 1));
}
