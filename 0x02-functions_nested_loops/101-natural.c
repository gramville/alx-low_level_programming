#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main()
{
	int i, res=0;

	for (i = 0; i < 1024; i++){
		if (i % 3 == 0 || i % 5 == 0)
			res += i;
	}
	printf("%d\n", res);
	return (0);
}
