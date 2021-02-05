#include <stdio.h>
/**
 * main - prints numbers less than 10
 * Return:  zero  if success
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
