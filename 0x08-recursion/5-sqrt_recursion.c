#include "main.h"

/**
 * helperFunction - to check if sqrt of number exists
 * @num: number
 * @pSqrt: possible sqrt
 * Return: -1 if error, else sqrt of number
 */

int helperFunction(int num, int pSqrt)
{
	if ((pSqrt * pSqrt) == num)
	{
		return (pSqrt);
	}

	else
	{
		if ((pSqrt * pSqrt) > num)
			return (-1);
		else
			return (helperFunction(num, pSqrt + 1));
	}
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number to find sqrt
 * Return: sqrt of n
 * -1 if error and does not have a natural sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperFunction(n, 0));
}
