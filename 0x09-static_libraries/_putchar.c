#include <unistd.h>

/**
 * _putchar - writes the char c to stdout
 * @c: char to print
 * Return: 1, if successful, -1 if error and returns "errno"
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
