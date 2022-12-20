#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: string to be reversed
 * Return:void
 */
void rev_string(char *s)
{
	char rs = s[0];
	int c = 0;
	int i;
	while (s[c] != '\0')
		c++;
	for (i = 0; i < c; i++)
	{
		c--;
		rs = s[i];
		s[i] = s[c];
		s[c] = rs;
	}
}

