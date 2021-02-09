#include <stdio.h>
#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
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
	else if (n >= 0 && n <= nine)
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
	else if (n < 0)
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
