#include "main.h"
#include <stdio.h>
/**
 * get_bit - fetch the value of bit at given index
 * @n: number to evaluate
 * @index: index starting from 0, of the bit required to get
 * Return: Value of bit at index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int input;

	if (index > 64)
		return (-1);

	input = n >> index;

	return (input & 1);
}
