#include <stdio.h>
#include <sys/syscall.h>
/**
 * main - Entry point
 *
 * Description: 'UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char print = 'and that piece of art is useful" - Dora Korpar, 2015-10-19\n';
syscall(SYS_write, 1, print, sizeof(print)); 
return (1);
}
