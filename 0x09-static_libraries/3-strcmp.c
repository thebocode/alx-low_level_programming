#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: pointer to character
 * @s2: pointer to character
 * Return: successful
 */

int _strcmp(char *s1, char *s2)
{
	char *str_one = s1;
	char *str_two = s2;

	while (*str_one != '\0' && *str_two != '\0' && *str_one == *str_two)
	{
		str_one++;
		str_two++;
	}

	return (*str_one - *str_two);
}
