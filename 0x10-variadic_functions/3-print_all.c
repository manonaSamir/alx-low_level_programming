#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char *const format, ...)
{
int i = 0;
char *str, *separator = "";
va_list prints;
va_start(prints, format);
if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", separator, va_arg(prints, int));
break;
case 'i':
printf("%s%d", separator, va_arg(prints, int));
break;
case 'f':
printf("%s%f", separator, va_arg(prints, double));
break;
case 's':
str = va_arg(prints, char *);
if (!str)
str = "(nil)";
printf("%s%s", separator, str);
break;
default:
i++;
continue;
}
separator = ", ";
i++;
}
}
printf("\n");
va_end(prints);
}
