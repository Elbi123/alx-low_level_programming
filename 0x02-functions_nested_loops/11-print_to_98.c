#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - check the code for Holberton School students.
 * @n: number to be processed
 * Return: void.
 */
void print_greater_than_98(int n);


void print_to_98(int n)
{
	static int nine = 98;

	if (n > nine)
	{
		while (n >= nine)
		{
			printf("%d", n);
			if (n > nine)
			{
				printf(", ");
			}
			n--;
		}
		printf("\n");
	}
	else if ((n >= 0 || n < 0) && n <= nine)
	{
		while (n <= nine)
		{
			printf("%d", n);
			if (n < nine)
			{
				printf(", ");
			}
			n++;
		}
		printf("\n");
	}
}
