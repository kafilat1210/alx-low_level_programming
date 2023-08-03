#include "main.h"

/**
 *is_prime_number - checks whether the given number
 * is a prime number
 *
 *@n: The given number
 *
 *Returns: 1 when @n is prime otherwise 0
 *
 **/
int _is_prime_number(int n)
{
	return (prime_check(n, 2));
}

/**
 *prime_check - san natural numbers begining 2
 *to determine whether bthe given number @n is prime
 *
 * @n: The given number
 *@i:  Anatural number
 *
 *Return: The number 1 wnen @n is prime
 *otherwise return 0
 *
 **/
int prime_check(int n, int i)
{
	if (i == n)
	{
		return (i);
	}
	else if ((n % i == 0 && i < n) || (n < 2))
	{
		return (0);
	}
	return (prime_check(n, i + 1));
}
