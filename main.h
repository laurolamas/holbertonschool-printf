#ifndef main_h
#define main_h

#include <stdarg.h>
#include <unistd.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
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
int printAddress(va_list);

int _putchar(char c);
int putstring(char *str);
int putNum(long int n, int base, char *digits);

#endif
