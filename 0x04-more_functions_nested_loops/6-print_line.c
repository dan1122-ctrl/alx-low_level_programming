#include "main.h"
/**
 * print_line - draws a straight line
 * @n: is a number
 * Rerurn: void
 */
void print_line(int n)
{
	int a;

	for (a = 0; a <= n; a++)
	{
		_putchar(_);
	}
	_putchar('\n');
}
