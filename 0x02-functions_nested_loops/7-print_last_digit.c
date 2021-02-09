#include "holberton.h"
/**
 * print_last_digit - prints last digit
 *@num: integer
 * Return: the last digits.
 */
int print_last_digit(int num)
{
	int last_digit;

	if (num >= 0)
	{
		last_digit = num % 10;
		_putchar(last_digit + '0');
	}
	if (num < 0)
	{
		last_digit = -(num) % 10;
		_putchar(last_digit + '0');
	}
	return (last_digit);
}
