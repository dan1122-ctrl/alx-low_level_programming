#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Return: always(0)succes
 */
int main(void)
{
	int f = 0;

	int s = 0;

	for (f = '0'; f <= '9'; f++)
	{
		for (s = '0'; s <= '9'; s++)
		{
			if (!((s == f) || (f == s)))
			{
				putchar(f);
				putchar(s);
				if (!(s == '9' && f == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
		putchar('\n');

		return (0);
}
