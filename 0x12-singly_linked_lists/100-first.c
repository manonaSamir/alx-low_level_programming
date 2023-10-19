#include <stdio.h>

void first(void) _ _attribute_ _ ((constructor));

/**
 * first - prints a before the main function is executed.
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
