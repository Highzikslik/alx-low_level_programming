#include "main.h"

/**
 * largest_number - returns the largest of three integers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: Largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
	{
		largest = a;
	}
	else if (b > a && a > c)
	{
		largest = b;
	}
	else if (c > a && a > b)
	{
		largest = c;
	}
	return (largest);
}
