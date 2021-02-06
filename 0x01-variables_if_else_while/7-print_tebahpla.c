#include <stdio.h>
/**
 * main - prints numbers less than 10
 * Return:  zero  if success
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
