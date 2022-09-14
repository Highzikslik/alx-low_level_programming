#include "main.h"

/**
 * _isalpha - determines if character is an alphabet
 * @c: character to be tested
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	if ((c > 64 && c <= 90) || (c > 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
