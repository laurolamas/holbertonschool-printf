#include <main.h>
#include <stdio.h>

/**
 *_printf - Our printf
 *
 *@format: format
 *
 *Return: Number of characters printed
 */

int _printf(const char *format, ...)
{
	int count = 0;
	int i;

	for (i = 0; i < _strlen(format); i++)
	{
		switch (fomrat[i])
		{
			case '%':
				break;

			case '\':
				break;

		}
	}

	return (count);
}
