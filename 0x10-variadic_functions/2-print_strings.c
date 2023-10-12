#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;
va_list numbers;
va_start(numbers, n);
for (i = 0; i < n ; i++)
{
str = va_arg(numbers, char*);
if (!str)
printf("%s", "(nil)");
else
printf("%s", str);
if (separator && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(numbers);
}
