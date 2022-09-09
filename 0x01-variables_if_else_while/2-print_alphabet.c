#include <stdio.h>

/**
 * main - Entry point for lowercase alphabets
 * Return: Always (success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar (c);

	putchar('\n');
	return (0);
}
