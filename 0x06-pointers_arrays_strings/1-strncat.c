#include "main.h"
/**
 * _strncat - it will use at most n bytes from src
 * @dest: destination
 * @src: source
 * @n: cout
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[a];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
