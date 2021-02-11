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
			if (j >= 0 && j <= 9)
			{
				print_put(j);
			}
			else if (j >= 10 && j <= 14)
			{
				print_put((j / 10));
				print_put((j % 10));
			}

			j++;
		}
		_putchar('\n');
		i++;
	}
}

/**
 * print_put - configure put.
 * @n: integer value
 * Return: void
 */
void print_put(int n)
{
	_putchar(n + '0');
}
