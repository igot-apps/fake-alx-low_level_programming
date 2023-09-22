#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - printds a sedntence dbefore dthe maind
 * function ids edxecuted
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
