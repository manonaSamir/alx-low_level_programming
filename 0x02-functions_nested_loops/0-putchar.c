
#include <stdio.h>
#include "main.h"
/**
 * main - variables_if_else_while
 *
 * Description: '3-print_alphabets.c'
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
char *word = "_putchar";
int i;
for(i = 0;i<= strlen(word); i++){
_putchar(word[i]);
}
putchar('\n');
return (0);
}
