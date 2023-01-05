#include "main.h"
/**
 * _strlen_recursion - returns the length of string
 * @s:the string measured
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
	int lengt = 0;

	if (*s)
	{
		lengt++;
		lengt += _strlen_recursion(s + 1);
	}
	return (lengt);
}
