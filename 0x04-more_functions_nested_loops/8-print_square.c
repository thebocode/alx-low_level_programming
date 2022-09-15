#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square followed by a new line
 * @size: parameter
 * Return: 0
 */

void print_square(int size)
{
	int num1, num2;

	if (size > 0)
	{
		for (num1 = 0; num1 < size; num1++)
		{
			for (num2 = 0; num2 < (size - 1); num2++)
			{
				putchar('#');
			}
			putchar('#');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
