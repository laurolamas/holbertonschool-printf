#include "main.h"
/**
 * printUnsigned - Prints an integer
 * @args: the number to print
 * Return: len of number
 */

int printUnsigned(va_list args)
{
	return (putNum(va_arg(args, unsigned int), 10, "0123456789"));
}

/**
 * printOctal - Prints an integer
 * @args: the number to print
 * Return: len of number
 */

int printOctal(va_list args)
{
	return (putNum(va_arg(args, unsigned int), 8, "01234567"));
}

/**
 * printHexidecimal - Prints an integer
 * @args: the number to print
 * Return: len of number
 */

int printHexidecimal(va_list args)
{
	return (putNum(va_arg(args, unsigned int), 16, "0123456789abcdef"));
}

/**
 * printHexidecimalCap - Prints an integer
 * @args: the number to print
 * Return: len of number
 */

int printHexidecimalCap(va_list args)
{
	return (putNum(va_arg(args, unsigned int), 16, "0123456789ABCDEF"));
}

/**
 * printAddress - Prints an integer
 * @args: the number to print
 * Return: len of number
 */

int printAddress(va_list args)
{
        return(putstring("0x") + putNum(va_arg(args, unsigned long int), 16, "0123456789abcdef"));
}
