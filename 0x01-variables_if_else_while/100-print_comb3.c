#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Return: always(0)succes
 */
int main(void)
{
	int f;

	int s;

	for (f = '0'; f <= '9'; f++)
	{
		for (s = '0'; s <= '9'; s++)
		{
			if (!(f == '9' && s == '8'))
			{
				putchar(f);
				putchar(s);
				if (!(f == '9' && s == '8'))
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
