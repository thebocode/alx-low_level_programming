#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: parameter of a triangle
 * Return: 0
 */

void print_triangle(int size)
{
	int num1, num2;

	if (size > 0)
	{
		for (num1 = 1; num1 <= size; num1++)
		{
			for ((num2 = size - num1); num2 > 0; num2--)
			{
				putchar(' ');
			}

			for (num2 = 0; num2 < num1; num2++)
			{
				putchar('#');
			}

			if (num1 == size)
			{
				continue;
			}

			putchar('\n');
		}
	}
	putchar('\n');
}
