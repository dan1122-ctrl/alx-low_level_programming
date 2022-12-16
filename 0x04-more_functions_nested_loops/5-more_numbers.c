#include "main.h"
/**
 * more_numbers - prints 10 times the numbers
 * Return: void
 */
void more_numbers(void)
{
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 14; j++)
		{
			k = i / 10;
			l = j % 10;
			if (i > 10)
				_putchar(k + '0');
			_putchar(l + '0');
		}
		_putchar('\n');
	}
}
