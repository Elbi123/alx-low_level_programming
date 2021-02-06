#include <stdio.h>
/**
 * main - prints alphabet in lower and uppercase
 * Return:  zero  in success
 */
int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		putchar((i) + '0');
		if (i < 9)
		{
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
