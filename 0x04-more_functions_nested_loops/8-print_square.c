#include "holberton.h"
/**
 * print_square - check the code for Holberton School students.
 * @size: int number of square
 * Return: void.
 */
void print_square(int size)
{
	if (size == 0 || size < 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 1;

		while (i <= size)
		{
			int j = 1;

			while (j <= size)
			{
				_putchar(35);
				j++;
			}
			i++;
			_putchar('\n');
		}
	}
}
