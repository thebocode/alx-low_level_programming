#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: integer argument
 * Return: void
 */

void print_times_table(int n)
{
	int x;
	int y;
	int z;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				z = (x * y);
				if (y == 0)
					_putchar('0' + z);
				else
				{
					_putchar(',');
					_putchar(' ');
					if (z <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + z);
					}
					else if (z > 9 && z < 100)
					{
						_putchar(' ');
						_putchar('0' + (z / 10));
						_putchar('0' + (z % 10));
					}
					else if (z >= 100)
					{
						_putchar('0' + (z / 100));
						_putchar('0' + ((z / 10) % 10));
						_putchar('0' + (z % 10));					}
				}
			}
			_putchar('\n');
		}
	}
}
