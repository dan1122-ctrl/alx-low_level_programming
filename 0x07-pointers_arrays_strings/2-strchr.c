#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @c:  first occurrence of the character
 * @s: string
 * Return: null
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; *(s + a) != '\0'; a++)
		if (*(s + a) == c)
			return (s + a);
	if (*(s +a) == c)
		return (s + a);
			return ('\0');
}
