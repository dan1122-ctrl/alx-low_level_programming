#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: strig
 * Return: void
 */
void puts_half(char *str)
{
        int i = 0;
        for (; str[i] != '\0'; i++)
        {
                if (i % 2 == 0)
                        _putchar(str[i]);
                else
                        continue;
        }
}
