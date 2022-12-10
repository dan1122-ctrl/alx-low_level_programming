#include <stdio.h>
/**
 * main - entry point
 *
 * Return : always (0)succes
 */

int main(void)
{
	char lc;
	char Ac;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	for (Ac = 'A'; Ac <= 'Z'; Ac++)
	{
		putchar(Ac);
	}
		putchar('\n');
	return (0);
}
