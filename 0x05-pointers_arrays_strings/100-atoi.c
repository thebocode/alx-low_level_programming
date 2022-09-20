#include "main.h"

/**
 * _atoi - convert to int
 * @s: string
 * Return: int
 */

int _atoi(char *s)
{
	int a, b, d;
	unsigned int x;
	char c;

	a = 0;
	while (*(s + a))
	{
		a++;
	}
	a--;
	x = 0;
	d = 1;
	for (b = 0; b <= a; b++)
	{
		c = *(s + b);
		if (c == '-')
		{
			d *= -1;
		}
		else if (c >= '0' && c <= '9')
		{
			x = x * 10 + (c - '0');
		}
		else if (x > 0)
		{
			break;
		}
	}

	return (d * x);
}
