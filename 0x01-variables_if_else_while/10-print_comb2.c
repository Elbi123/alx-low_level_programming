#include <stdio.h>
/**
 * main - prints all combination starting from 00 - 99
 * Return:  zero  in success
 */
int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		if (i <= 98)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
