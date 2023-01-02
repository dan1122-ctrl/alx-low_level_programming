#include "main.h"
/**
 * _memset -  function fills the first 
 * @n: bytes of the memory area pointed 
 * @b: constant byte
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	for (i = 0; i < n; i++)
	*(s + i) = b;
	return (s);
}
