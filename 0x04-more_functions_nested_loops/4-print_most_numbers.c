#include "main.h"
/**
 * print_most_numbers -  prints the numbers, from 0 to 9 exept 2 and 4
 * @n:is anintiger
 * Return: void
 */
void print_most_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		if (n != '2' && n != '4')
			_putchar(n);
	}
	_putchar('\n');
}

