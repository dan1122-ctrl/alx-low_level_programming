#include "main.h"
/**
 *times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int num, mu, prd;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');
		for (mu = 1; mu <= 9; mu++)
		{
			_putchar(',');
			_putchar(' ');

			prd = num * mu;

			if (prd <= 9)
				_putchar(' ');
			else
				_putchar((prd / 10) + '0');
			_putchar((prd % 10) + '0');
		}
		_putchar('\n');
	}
}
