#include "holberton.h"
/**
 * print_triangle - prints the triangle
 * @size: size of the triangle
 * Return: Always 0.
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j, k;

		for (i = size; i >= 1; i--)
		{
			for (j = 1; j <= i; j++)
			{
				if (j > 1)
				{
					_putchar(' ');
				}
			}
			for (k = size; k >= i; k--)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
