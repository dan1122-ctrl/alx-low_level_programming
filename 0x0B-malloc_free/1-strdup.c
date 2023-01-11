#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return:alwys 0
 */

char *_strdup(char *str)
{
	char *jjj;
	int i, r = 0;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;
	jjj = malloc(sizeof(char) * (i + 1));
	if (jjj == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		jjj[r] = str[r];
	return (jjj);
}
