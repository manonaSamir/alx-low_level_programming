#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints strings
 * @separator: separator between strings
 * @n: number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i, size = 2;
char print [200];
va_list numbers;
va_start(numbers, n);
if (separator)
size =  4;
for (i = 0; i < n * size; i += size)
{
print[i] = '%';
print[i + 1] = 'd';
if (i != (n * size) -size)
{
if (separator)
{
print[i + 2] = *separator;
print[i + 3] = ' ';
}
}
}
print[i - 2] = '\0';
print[i + 1] = '\n';
vprintf(print, numbers);
va_end(numbers);
}
