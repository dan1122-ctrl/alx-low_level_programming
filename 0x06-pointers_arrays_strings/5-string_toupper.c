#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @i: intiger
 * Return: i
 */
char *string_toupper(char *i)
{
	int b;
	b = 0;

	while (i[b] != '\0')
	{
		if (i[b] >= 'a' && i[b] <= 'z')
			i[b] = i[b] - 32;
		b++;
	}
	return (i);
}

