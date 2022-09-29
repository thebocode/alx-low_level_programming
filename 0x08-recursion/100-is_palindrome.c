#include "main.h"

/**
 * len - checks the length of a string
 * @s: string
 * Return: length of the string
 */

int len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + len(s + 1));
}

/**
 * pCheck - to check if string is palindrome
 * @i: index
 * @lstr: length of the string
 * @s: string
 * Return: 1 if palindrome, 0 otherwise
 */

int pCheck(int i, int lstr, char *s)
{
	if (lstr > 0)
	{
		if (s[i] == s[lstr])
		{
			return (pCheck(i + 1, lstr - 1, s));
		}
		else if (s[i] != s[lstr])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string
 * Return: 1 if string is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	return (pCheck(0, lstr(s) - 1, s));
}
