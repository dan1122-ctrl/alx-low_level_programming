#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: the number of sign to be printed
 * Return: return 1 if number is greater
 * 0 if number is zero
 * -1 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else 
	{
		_putchar('-');
		return (-1);
	}
}
