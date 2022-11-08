#include <stdio.h>

/**
 * befor_main - function executed before main
 * Return: no return.
 */

void __attribute__ ((constructor)) befor_main()
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
