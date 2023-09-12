
#include "main.h"
#include <string.h>
/**
 * main - variables_if_else_while
 *
 * Description: '3-print_alphabets.c'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char *word = "_putchar ";
int i;
int len = strlen(word);
for (i = 0; i <= len; i++)
{
_putchar(word[i]);
}
_putchar('\n');
return (0);
}
