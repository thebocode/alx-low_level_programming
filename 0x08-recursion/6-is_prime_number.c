#include "main.h"

/**
 * helperFunction - to return 0 or 1
 * @num: number
 * @i: possible factor of number
 * Return: 1 if prime, 0 if not prime
 */

int helperFunction(int num, int i)
{
	if (i < num)
	{
		if (num % i == 0)
		{
			return (0);
		}
		else
		{
			return (helperFunction(num, i + 1));
		}
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - checks if input integer is prime number
 * @n: number to check
 * Return: 1 if number is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (helperFunction(n, 2));
	}
}
