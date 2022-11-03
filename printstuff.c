#include "main.h"

/**
 * printChar - Prints a character
 * @c: the character to print
 * Return: 1
 */

int printChar(char c)
{
	write(1, &c, 1);
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
		printChar(str[i]);

	return (i);

}

/**
 * printNum - Prints an integer
 * @n: the number to print
 * Return: len of number
 */
int printNum(int n)
{
	int ncpy = n;
	int count = 0;

	while (ncpy != 0)
	{
		ncpy = ncpy / 10;
		count++;
	}
	if (n < 0)
	{
		printChar('-');
		n = -n;
	}
	if (n / 10)
		printNum(n / 10);

	printChar(n % 10 + '0');

	return (count);
}
