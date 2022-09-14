#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: argument for the number
 * Return: the value of the last digit of n
 */

int print_last_digit(int n)
{
	int r;

	if (n < 0)
	{
		r = (n % 10) * -1;
		_putchar(r + '0');
		return (r);
	}
	else
	{
		r = n % 10;
		_putchar(r + '0');
		return (r);
	}
}
