#include <stdio.h>
#include "holberton.h"
/**
 * main - calls other method
 *
 * Return: Always 0.
 */
int main(void)
{
	fizz_buzz_test();
	return (0);
}
/**
 * fizz_buzz_test - prints fizz buzz
 *
 * Return: void.
 */
void fizz_buzz_test(void)
{
	char fizz[10] = "Fizz";
	char buzz[10] = "Buzz";
	char fizzbuzz[10] = "FizzBuzz";
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s", fizzbuzz);
		}
		if (i % 3 == 0)
		{
			printf("%s", fizz);
		}
		else if (i % 5 == 0)
		{
			printf("%s", buzz);
		}
		else
		{
			printf("%d", i);
		}
		printf(" ");
		i++;
	}
	printf("\n");
}
