#include "main.h"
/**
 * print_alphabet_x10 - checkout the code
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int ten;

	int al;

	for (ten = 1; ten >= 10; ten++)
	{
		for (al = 'a'; al <= 'z'; al++)
			_putchar(al);
		putchar('\n');
	}
		return (0);
}

