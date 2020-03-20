#include "lists.h"

/**
 * first_func - executes before main
 */
void first_func(void) __attribute__((constructor));

void first_func(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
