#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	_putchar((n % 10));
	return (n % 10);
}
