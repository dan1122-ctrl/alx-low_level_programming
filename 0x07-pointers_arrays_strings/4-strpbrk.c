#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: string 
 * @accept: the bytes in the string accept
 * return: the bytes in accept, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; *(s + a); != '\0'; a++)
	{
		for (b = 0; *(accept + b); != '\0'; b++)
		{
			if (*(s + a) == *(accept + b))
				return (s + a);
		}
	}
	return ('\0');
}
