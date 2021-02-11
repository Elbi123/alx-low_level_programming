#include "holberton.h"
/**
 * print_diagonal - check the code for Holberton School students.
 * @n: int value
 * Return: void.
 */
void print_diagonal(int n)
{
	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 0;

		while (i < n)
		{
			int j = 0;

			while (j < n)
			{
				if (i == j)
				{
					int k = j;
					int m = 0;

					while (m < k)
					{
						_putchar(' ');
						m++;
					}
					_putchar(92);
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
