#include "main.h"

/**
 * check_str - Entry point
 * description: checks if two strings are identical
 * @s1: variable
 * @s2: variable
 * @i: variable
 * @c: variable
 *
 * Return: 1 if string is identical, 0 or not
 */

int check_str(char *s1, char *s2, int i, int c)
{
	if (s1[i] == '\0' && s2[c] == '\0')
		return (1);

	if (s1[i] == s2[c])
		return (check_str(s1, s2, i + 1, c + 1));

	if (s1[i] == '\0' && s2[c] == '*')
		return (check_str(s1, s2, i, c + 1));

	if (s2[c] == '*')
		return (check_str(s1, s2, i + 1, c) || check_str(s1, s2, i, c + 1));
	return (0);
}

/**
 * wildcmp - Entry point
 * description: check if strings could be considered identical
 * @s1: variable
 * @s2: variable
 *
 * Return: 1 if are considered identical.
 */
int wildcmp(char *s1, char *s2)
{
	return (str_checker(s1, s2, 0, 0));
}
