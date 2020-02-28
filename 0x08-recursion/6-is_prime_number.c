#include "holberton.h"

/**
 * is_prime_number - Function to see if n is prime.
 * @n: Check if prime
 * Return: prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, 2));
}

/**
 * _prime - find a prime number.
 * @n: number
 * @prime: prime
 * Return: 1 if prime; 0 if not prime.
 */

int _prime(int n, int prime)
{
	if (prime <= (n - 1))
	{
		if (n % prime == 0)
		{
			return (0);
		}
		return (_prime(n, prime + 1));
	}
	return (1);
}
