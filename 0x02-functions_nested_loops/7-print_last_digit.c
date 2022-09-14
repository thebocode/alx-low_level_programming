#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: argument for the number
 * Return: the value of the last digit of n
 */

int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;
			_putchar('0' + (n % 10));
			_putchar('\n');

	return (n % 10);
}
