#include <stdio.h>
/**
 * main - to print lower case except q,e
 *
 * Return:always (0)sucess
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (lc != 'e' && lc != 'q')
			putchar(lc);
	}
			putchar('\n');
	return (0);
}
