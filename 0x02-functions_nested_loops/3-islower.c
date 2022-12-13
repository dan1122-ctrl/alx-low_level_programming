#include "main.h"
/**
 * _islower - checkout lower case
 * @c: the character need to be checked
 * Return: return 0 for lower case 1 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
