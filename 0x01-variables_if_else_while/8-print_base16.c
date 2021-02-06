#include <stdio.h>
/**
 * main - prints base16
 * Return:  zero  in success
 */
int main(void)
{
	char ch1;
	char ch2;

	for (ch1 = 0; ch1 <= 9; ch1++)
	{
		putchar((ch1) + '0');
	}
	for (ch2 = 'a'; ch2 <= 'f'; ch2++)
	{
		putchar(ch2);
	}
	putchar('\n');
	return (0);
}
