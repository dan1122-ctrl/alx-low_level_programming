#include "main.h"
/**
 * print_alphabet_x10 - checkout the code
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int ten;

	int al;

	for (ten = 0; ten >= 9; ten++)
	{
		for (al = 'a'; al <= 'z'; al++)
			_putchar(al);
		_putchar('\n');
	}
}
