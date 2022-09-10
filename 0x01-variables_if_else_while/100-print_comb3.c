#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: always 0
 */

int main(void)
{
	int num1, num2;

	for (num1 = 0;  num1 <= 9; num1++)
	{
		for (num2 = 1; num2 <= 9; num2++)
		{
			if (num2 > num1)
			{
				putchar(num1 + '0');
				putchar(num2 + '0');
				if (num1 != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
