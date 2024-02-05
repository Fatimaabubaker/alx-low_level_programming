#include "lists.h"
void _constructor(void) _attribute_ ((constructor));

/**
 * _constructor - executes before main()
 *
 * Return: void
 */
void _constructor(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
