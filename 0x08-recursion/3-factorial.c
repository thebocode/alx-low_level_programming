#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: number to find the factorial
 * Return: the factorial of n if n > 0
 *	-1 if n < 0
 */

int factorial(int n)
{
	int a = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	a *= factorial(n - 1);

	return (a);
}
