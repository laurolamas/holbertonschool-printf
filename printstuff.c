include "main.h"

/**
 * printChar - Prints a character
 * @c: the character to print
 * Return: 1
 */

int printChar(char c)
{
	_putchar(c);

	return (1);
}

/**
 * printString - Prints a string
 * @str: the string to copy
 * Return: len of string
 */

int printString(char *str)
{
	int i;

	if (!str)
	{
		return (printString("(null)"));
	}

	for (i = 0; str[i] != '\0' ; i++)
		_putchar(str[i]);

	return (i);

}
