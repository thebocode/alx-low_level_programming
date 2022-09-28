include "main.h"

/**
 * _pow_recursion - function that returns the natural square root of a number
 * @x: number to be raised
 * @y: power
 * Return: value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	int a = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	a *= _pow_recursion(x, y - 1);
	return (a);
}
