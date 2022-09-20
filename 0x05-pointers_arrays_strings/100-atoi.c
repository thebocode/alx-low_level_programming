#include "main.h"

/**
 * _atoi - convert to int
 * @s: string
 * Return: int
 */

int _atoi(char *s)
{
	int a, b, x, y;

	a = x = 0;
	y = 1;
	while ((s[a] < '0' || s[a] > '9') && (s[a] != '\0'))
	{
		if (s[a] == '-')
			y *= -1;
		a++;
	}

	b = 1;
	while ((s[b] >= '0') && (s[b] <= '9'))
	{
		x = (x * 10) + y * ((s[b]) - '0');
		b++;
	}

	return (x);
}
