#include <stdio.h>
#include "holberton.h"
/**
 * print_alphabet - prints the alphabet from a - z
 *
 * Return: void
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
