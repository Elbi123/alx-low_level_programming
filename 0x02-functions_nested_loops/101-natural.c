#include <stdio.h>
#include "holberton.h"

/**
 * main - prints sum
 * Return: On success 0.
 */
int main(void)
{
	int n;

	printf("Enter the number: ");
	scanf("%d", &n);

	int total = 0;
	int i = 1;

	while (i < n)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			total = total + i;
		}
		i++;
	}
	printf("%d\n", total);
	return (0);
}

