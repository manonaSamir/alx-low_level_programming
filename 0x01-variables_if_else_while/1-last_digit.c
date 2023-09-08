#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - variables_if_else_while
 *
 * Description: '1-last_digit'
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
    int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
switch (n % 10) {
case 5:
printf("%d is greater than 5\n", n);
break;
case 0:
printf("%d is 0\n", n);
break;
case 6:
printf("%d is less than 6 and not 0\n", n);
}
return (0);
}
