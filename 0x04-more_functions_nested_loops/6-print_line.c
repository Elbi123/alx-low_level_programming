#include "holberton.h"
/**
 * print_line - print line.
 * @n: int value
 * Return: void.
 */
void print_line(int n)
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
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
