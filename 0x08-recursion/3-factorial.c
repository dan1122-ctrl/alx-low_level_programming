#include "main.h"
/**
 * factorial - returs the factorial
 * @n: number to return the factorial
 * Return: 0 or -1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
