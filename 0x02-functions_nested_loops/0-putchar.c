#include "main.h"
/*
*This function prints  the word _putchar
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
