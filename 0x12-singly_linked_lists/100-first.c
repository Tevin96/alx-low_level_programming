#include <stdio.h>

void mainfunction(void) __attribute__ ((constructor));

/**
 * mainfunction - prints a sentence before the main function is executed
 */
void mainfunction(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
