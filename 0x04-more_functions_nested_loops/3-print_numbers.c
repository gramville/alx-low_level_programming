#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar(i + '0');
		++i;
	}
	_putchar('\n');
}
