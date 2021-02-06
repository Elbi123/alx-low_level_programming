#include <stdio.h>
/**
 * main - prints numbers less than 10
 * Return:  zero  if success
 */
int main(void)
{
	int number = 9;

	while (number >= 0)
	{
		putchar(number);
		number--;
	}
	putchar('\n');
	return (0);
}
