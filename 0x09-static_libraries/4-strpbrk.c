#include "main.h"
/**
 * _strpbrk -function locates the first occurrence in the string
 * @s: string
 * @accept: the bytes in the string accept
 * Return: the bytes in accept, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		for (b = 0; *(accept + b) != '\0'; b++)
		{
			if (*(s + a) == *(accept + b))
				return (s + a);
		}
	}
	return ('\0');
}
