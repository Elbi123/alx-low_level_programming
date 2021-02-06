#include <stdio.h>
/**
 * main - prints numbers less than 10
 * Return:  zero  if success
 */
int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		putchar((number)+'0');
		number++;
	}
	putchar('\n');
	return (0);
}
