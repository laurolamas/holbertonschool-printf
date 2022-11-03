#include "main.h"

/**
 * printChar - Prints a character
 * @c: the character to print
 *
 */

void printChar(char c)
{
	write(1, &c, 1);
}

/**
 * printString - Prints a string
 * @str: the string to copy
 */

void printString(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' ; i++)
		_putchar(str[i]);
}

/**
 * printSing - Should print %
 * _putchar - prints a character
 *
 */

void printSing(void)
{
	_putchar(37);
}
