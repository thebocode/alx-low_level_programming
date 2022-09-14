#include <stdio.h>

/**
 * main - prints the sum of Fibonacci sequence
 * Return: 0
 */

int main(void)
{
	long int x, y, z, sum;

	x = 0;
	y = 1;
	z = 2;
	sum = 0;
	while (x <= 4000000)
	{
		x = y + z;
		if (z % 2 == 0)
		{
			sum += z;
		}
		y = z;
		z = x;
	}
	printf("%ld\n", sum);
	return (0);
}
