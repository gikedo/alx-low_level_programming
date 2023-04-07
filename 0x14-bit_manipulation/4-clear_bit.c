#include "main.h"
#include <stdio.h>
/**
 * clear_bit - configures the value of a bit to 0 at a given index
 * @n: pointer to decimal number to change
 * @index: index position to shift
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;
	unsigned int input;

	if (index > 64)
		return (-1);
	input = index;
	for (x = 1; input > 0; x *= 2, input--)
		;

	if ((*n >> index) & 1)
		*n -= x;

	return (1);
}
