#include <stdio.h>
#include "holberton.h"
/**
 * main - prints holberton
 * Return: On success 0.
 */
int main(void)
{
	char hello[] = "Holberton";
	int i = 0;

	while (hello[i] != '\0')
	{
		_putchar(hello[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
