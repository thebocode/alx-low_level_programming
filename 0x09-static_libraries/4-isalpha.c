#include "main.h"

/**
 * _isalpha - to check for alphabet character
 * @c: character to check
 * Return: 1 if character is lower/upper case, 0 if not aplhabet character
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
