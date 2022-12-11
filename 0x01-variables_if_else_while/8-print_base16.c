#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Return: always(0)sucess
 */
int main(void)
{
	int n;
	char lc;
	for (n ='0'; n <= '9'; n++)
		putchar(n);
	for (lc = 'a'; lc <= 'f'; lc++)
		putchar(lc);
	putchar('\n');

	return (0);
}
