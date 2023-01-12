#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: always 0
 */

char **strtow(char *str)
{
	int i, n, j = 0, l = 0;

	char *str;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}
	l += ac;
	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[j] = av[i][n];
			j++;
		}
		if (str[r] == '\0')
		{
			str[r++] = '\n';
		}
	}
	 return (str);
}
