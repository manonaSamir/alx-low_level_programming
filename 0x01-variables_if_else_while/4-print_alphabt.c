#include <stdio.h>

/**
 * main - variables_if_else_while
 *
 * Description: '4-print_alphabt.c'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
if(i != 'e' && i != 'q' )
{
putchar(i);
}
}
putchar('\n');
return (0);
}
