#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - the sum of all its parameters.
 * @n: number of arguments passed to the function
 *
 * Return: the resulting sum
 */

int sum_them_all(const unsigned int n, ...)
{
int i;
int sum = 0;
va_list sumCount;
va_start(sumCount, n);
for (i = 0; i < n; i++)
sum += va_arg(sumCount, int);
va_end(sumCount);
return (sum);
}
