#include "main.h"
/**
 * print_alphabet - print alphabet in lower case
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	char al = 'a';

	for (al = 'a'; al <= 'z'; al++)
		_putchar(al);
	_putchar('\n');
	return (0);

}
