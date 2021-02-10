#include "holberton.h"
/**
 * times_table - prints multiplication table.
 *
 * Return: void.
 */
void times_table(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		while (j < 10)
		{
			if ((i * j) <= 9)
			{
				if (j >= 1 && j <= 9)
				{
					_putchar(' ');
				}
				_putchar((i * j) + '0');
			}
			else if ((i * j) > 9)
			{
				_putchar(((i * j) / 10) + '0');
				_putchar(((i * j) % 10) + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
