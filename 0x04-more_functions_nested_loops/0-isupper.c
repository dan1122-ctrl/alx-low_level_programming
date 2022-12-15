#include <stdio.h>
#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: char to be cheacked
 * Return: 1 for upper case 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
