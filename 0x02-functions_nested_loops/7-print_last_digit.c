#include "main.h"

/**
 * print_last_digit - Prints out last digit of a number
 * @c: number to be tested
 *
 * Description:Accepts a number and prints out the last digit of the number
 * Return:Always 0
 */
int print_last_digit(int c)
{
	int n;

	if (c < 0)
	{
		c = -c;
	}
	n = c % 10;
	if (n < 0)
	{
		n = -n;
	}
	_putchar(n + '0');

	return (0);
}
