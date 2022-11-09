#ifndef main_h
#define main_h

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

typedef struct op
{
	char op;
	int (*f)(va_list);
} op_t;


int _printf(const char *format, ...);

int (*get_op_func(char))(va_list);

int printChar(va_list);
int printString(va_list);
int printNum(va_list);
int printSign(va_list);
int printBinary(va_list);
int printUnsigned(va_list);
int printOctal(va_list);
int printHexidecimal(va_list);
int printHexidecimalCap(va_list);

int putHex(long int);
int putHexCap(long int);
int _putchar(char c);
int putstring(char *str);
int putNum(long int n, int base, char *digits);

#endif
