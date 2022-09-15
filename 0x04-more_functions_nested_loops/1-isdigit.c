#include "main.h"
#include <stdio.h>

/**
 * _isdigit - function that checks for a digit (0 through 9)
 * @c: character to be tested
 * Return: 1 if true, 0 if otherwise
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);
}
