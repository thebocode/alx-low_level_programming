#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: pointer block of memory to fill
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += strlen_recursion(s + 1);
	}

	return (len)
}
