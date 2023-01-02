#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: segment
 * @accept: accepted byte
 * Return: consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		k = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			k = 0;
			if (*(s + i) == *(accept + j))
			{
				k = 0;
				break;
			}
		}
		if (k == 1)
			break;
	}
	return (i);
}
