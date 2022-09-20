#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 * Return: 0
 */

int main(void)
{
	char c;
	int r;

	srand(time(0));

	while (r <= 2645)
	{
		c = rand() % 128;
		r += c;
		putchar(c);
	}
	putchar(2772 - r);

	return (0);
}
