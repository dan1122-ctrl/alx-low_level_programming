#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @i: intiger
 * Return: always 0
 */
char *string_toupper(char *i)
{
	int a;
	while (i[a] != '\0')
	{
		if (i[a] >= 'a' && i[a] <= 'z')
			i[a] = i[a] - 32;
		a++;
	}
	return (i);
}

