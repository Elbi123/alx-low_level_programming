#include "holberton.h"
/**
 * print_times_table - prints multiplication table.
 * @n: integer number
 * Return: void
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{
		return;
	}

	int i = 0;

	while (i <= n)
	{
		int j = 0;

		while (j <= n)
		{
			int product = i * j;

			if ((product) <= 9)
			{
				if (j >= 1 && j <= (n - 1))
				{
					_putchar(' ');
				}
				_putchar((i * j) + '0');
			}
			else if ((product) > 9 && (product) <= 99)
			{
				_putchar(((product) / 10) + '0');
				_putchar(((product) % 10) + '0');
			}
			else if ((product) > 99)
			{
				int arr[3];
				int i = 0;
				int j, r;

				while (product != 0)
				{
					r = product % 10;
					arr[i] = r;
					i++;
					product = product / 10;
				}
				for (j = i - 1; j > -1; j--)
				{
					_putchar(arr[j] + '0');
				}
			}
			if (j <= (n - 1) && (i * j) < 100)
			{
				print_three();
			}
			else if (j <= (n - 1) && (i * j) >= 100)
			{
				print_two();
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}

/**
 * print_three - prints a comma and two blank space
 * Return: void
 */
void print_three(void)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
}

/**
 * print_two - prints a comma and one blank space
 * Return: void
 */
void print_two(void)
{
	_putchar(',');
	_putchar(' ');
}
