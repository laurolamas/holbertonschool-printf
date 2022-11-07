#include "main.h"

/**
 * printChar - Prints a character
 * @args: the character to print
 * Return: 1
 */

int printChar(va_list args)
{
	return (_putchar(va_arg(args, int)));
}

/**
 * printString - Prints a string
 * @args: the string to copy
 * Return: len of string
 */

int printString(va_list args)
{
	return (putstring(va_arg(args, char *)));

}

/**
 * printNum - Prints an integer
 * @args: the number to print
 * Return: len of number
 */

int printNum(va_list args)
{
	long int n = va_arg(args, int);

	if (n < 0)
	{
		_putchar('-');
		n = (n * -1);
	}

	return (putNum(n));
}

/**
 * printSign - Prints %
 * @args: the character to print
 * Return: 1
 */

int printSign(__attribute__((unused)) va_list args)
{
	return (_putchar('%'));
}
