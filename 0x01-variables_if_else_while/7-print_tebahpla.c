#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Return: always(0)succes
 */
int main(void)
{
	char ra;

	for (ra = 'z'; ra >= 'a'; ra--)
		putchar(ra);
	putchar('\n');

	return (0);
}
