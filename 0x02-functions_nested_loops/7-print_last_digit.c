#include "main.h"

/**
 * print_last_digit - Prints out last digit of a number
 * @c: number to be tested
 *
 * Description: Accepts a number and prints out the last digit of the number 
 * Return: Always 0 (success)
 */
int print_last_digit(int c)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
	}
	_putchar(last_digit + '0');

	return (last_digit);
}
