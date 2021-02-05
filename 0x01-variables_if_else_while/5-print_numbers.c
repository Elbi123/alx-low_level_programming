#include <stdio.h>
/**
 * main - prints numbers less than 10
 * Return:  zero  if success
 */
int main(void)
{
	char ch = '0';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
