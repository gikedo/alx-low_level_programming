#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary formats of a number
 * @n: decimal input to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int input;
	int shifts;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (input = n, shifts = 0; (input >>= 1) > 0; shifts++)
		;

	for (; shifts >= 0; shifts--)
	{
		if ((n >> shifts) & 1)
			printf("1");
		else
			printf("0");
	}
}
