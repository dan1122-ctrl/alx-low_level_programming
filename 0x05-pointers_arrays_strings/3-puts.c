#include "main.h"
/**
 * _puts - prints a string, followed by a new line,
 * @str: string
 * Return: void
 */
void _puts(char *str)
{
	m = 0;

	while (str[m] != '\0')
	{
		_putchar(str[m]);
		m++;
	}
}

