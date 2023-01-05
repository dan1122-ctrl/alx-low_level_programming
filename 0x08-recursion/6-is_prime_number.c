#include "main.h"
/**
 * is_prime_number - prints is prime number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 * Return: the resulting square root
 */

int is_prime_number(int n)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_prime(n, i - 1));
}
