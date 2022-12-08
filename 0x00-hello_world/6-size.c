#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always (0) succe
 */

int main(void)
{
	int intigertype;
	float floattype;
	char charactertype;
	long int longinttype;
	long long int longlonginttype;

	printf("size of char :%lu bytes\n", sizeof(charactertype));
	printf("size of int :%lu bytes\n", sizeof(intigertype));
	printf("size of long int :%lu bytes\n", sizeof(longinttype));
	printf("size of long long int :%lu bytes\n", sizeof(longlonginttype));
	printf("size of float :%lu bytes\n", sizeof(floattype))
	return (0);
}

