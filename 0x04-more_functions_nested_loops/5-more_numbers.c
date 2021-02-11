#include "holberton.h"
/**
 * more_numbers - prints 0 t0 14.
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		int j;

		j = 0;

		while (j <= 14)
		{
			if (j >= 10 && j <= 14)
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
			else if (j >= 0 && j <= 9)
			{
				_putchar('0' + j);
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
