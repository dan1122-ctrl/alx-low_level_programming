#include "main.h"
/**
 * _memset -  function fills the first
 * @n: bytes of the memory area pointed
 * @b: constant byte
 * @s: memory area
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	*(s + a) = b;
	return (s);
}
