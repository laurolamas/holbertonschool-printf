#include "main.h"

/**
 * _strlen - aaaaaaa
 * @s: aaaaaaa
 * Return: bbbbbbb
 */
int _strlen(const char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
		continue;

	return	(i);
}

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
	va_list ptr;

	va_start(ptr, format);


	for (i = 0; i < _strlen(format); i++)
	{
		switch (format[i])
		{
			case '%':
				switch (format[(i + 1)])
				{
					case 'c':
						_putchar(va_arg(ptr, int));
						count ++;
						break;

					case 's':
						count += printString(va_arg(ptr, char *));
						break;

					case '%':
						_putchar ('%');
						break;

					default:
						_putchar('X');
				}
				i++;
				break;

			case 92:
				break;

			default:
				_putchar(format[i]);
		}
	}

	va_end(ptr);

	return (count);
}
