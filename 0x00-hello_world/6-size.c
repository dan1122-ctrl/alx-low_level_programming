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
	printf("size of int :%ld bytes\n", sizeof(intigertype));
	printf("size of float :%ld bytes\n", sizeof(floattype));
	printf("size of char :%ld bytes\n", sizeof(charactertype));
	printf("size of long int :%ld bytes\n", sizeof(longinttype));
	printf("size of long long int :%ld bytes\n", sizeof(longlonginttype));
	return (0);
}

