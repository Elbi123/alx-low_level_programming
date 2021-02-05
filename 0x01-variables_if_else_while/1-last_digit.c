
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - prints the last digit of an integer
 * Return:
 * zero if the result is correct
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		last_digit = n % 10;
	}
	if (n < 0)
	{
		last_digit = n % 10;
	}
	if (last_digit > 5)
	{
		printf("Last digit of %d is %d is greater than 5\n", n, last_digit);
	}
	if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}
	if (last_digit < 6)
	{
		if (last_digit != 0)
		{
			printf("Last digit of %d is %d and is less that 6 and not 0\n",
			       n, last_digit);
		}
	}
	return (0);
}
