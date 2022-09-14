#include "main.h"

/**
 * _abs - returns the absolute value of input
 * @c: integer to be tested
 *
 * Description: Accepts an input and returns the absolute value of input
 * Return: Always 0 (success)
 */
int _abs(int c)
{
	if (c < 0)
	{
		return (-c);
	}
	else
	{
		return (c);
	}
	return (0);
}
