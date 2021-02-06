#include <stdio.h>
/**
 * main - prints alphate in reverse order
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
