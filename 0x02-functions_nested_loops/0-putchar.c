/*
 * File: 0-holberton.c
 * Auth: Brennan D Baraban
 *
 */

#include "main.h"

/**
 * main - Prints "Holberton" followed by a new line.
 *
 * Return: Always 0.
 */

int main(void)
{
	char c[] = "_putchar\n";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}
	return (0);
}