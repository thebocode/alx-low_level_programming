#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: input
 * @accept: input
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int b;

	while (*S)
	{
		for (b = 0; accept[b]; b++)
		{
		if (*s == accept[b])
		return (s);
		}
	s++;
	}
return ('\0');
}
