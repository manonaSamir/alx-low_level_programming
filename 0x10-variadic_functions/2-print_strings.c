#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints strings
 * @separator: separator between strings
 * @n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list numbers;
va_start(numbers, n);
for (i = 0; i < n ; i++)
{
if(!numbers[i])
printf("%s", "nil");
else
printf("%s", va_arg(numbers, char*));
if (separator && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(numbers);
}
