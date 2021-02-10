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
	printf("%d", print_sum(n));
	printf("\n");

	
	return (0);
}

int print_sum(int number)
{
	int total = 0;
	int i = 1;

	while (i < number)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			total = total + i;
		}
		i++;
	}
        return (total);
}
