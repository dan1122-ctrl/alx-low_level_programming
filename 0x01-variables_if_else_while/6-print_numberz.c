#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Return: always zero sucess
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);

	putchar('\n');
	return (0);
}
