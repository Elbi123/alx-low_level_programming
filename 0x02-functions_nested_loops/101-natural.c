#include <stdio.h>
#include "holberton.h"

int main(void)
{
	int n = 1024;
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
}

