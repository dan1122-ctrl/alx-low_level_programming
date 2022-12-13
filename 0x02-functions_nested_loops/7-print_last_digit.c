#include "main.h"
/**
 * print_last_digit - print last digit of a number
 * @n:the out put number
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int ln = n % 10;

	if (ln < 0)
		ln *= -1;

	_putchar(ln + '0');

	return (0);
}
