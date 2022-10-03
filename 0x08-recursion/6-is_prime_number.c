#include "main.h"

int prime_checker(int n, int i);
/**
 * is_prime_number - executes prime checker
 * @n: input to check
 * Return: Always 0 (success)
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (prime_checker(n, n / 2) > 0)
		return (1);
	return (0);
}
/**
 * prime_checker - checks for prime
 * @n: input to check
 * @i: n / 2, then passes to 1 - 1, checks if greater than 1
 * Return: prime check
 */
int prime_checker(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (prime_checker(n, i - 1));
}