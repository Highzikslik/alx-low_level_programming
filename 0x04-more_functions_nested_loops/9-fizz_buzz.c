#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main- prints the numbers from 1-100
 * 3 multiples print Fizz
 * 5 multiples print Buzz5 multiples print Buzz
 * 3 and 5 print FizzBuzz
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("%s", b);
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s ", fb)
		else if (i % 3 == 0)
			printf("%s ", f);
		else if (i % 5 == 0)
			printf("%s ", b);
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
