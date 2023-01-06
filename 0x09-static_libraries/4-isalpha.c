#include "main.h"
/**
 * _isalpha - check for alphabet character
 * @c: character to be checked
 *
 * Return: return 1 for lower and upper case 0 or others
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
