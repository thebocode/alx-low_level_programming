#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int i;
	long int a;
	long int b;
	long int c;

	a = 1;
	b = 2;

	printf("%ld, %ld, ", a, b);
	for (i = 3; i <= 50; i++)
	{
		c = a + b;
		printf("%ld", c);
		if (i != 50)
		{
			printf(", ");
		}
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
