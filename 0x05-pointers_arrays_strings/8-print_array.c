#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: array
 * @n: number of elements
 * Return: 0
 */

void print_array(int *a, int n)
{
	int x;

	if (n <= 0)
	{
		printf("\n");
		return;
	}
	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != n - 1)
			printf(", ");
		else
			printf("\n");
	}
}
