#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;

    len = _printf("String: %s Character: %c Sign: %%\n", "hola", 'R');

    return (len);
}
