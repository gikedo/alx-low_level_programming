#include "main.h"
#include <stdio.h>

/**
 * flip_bits - swap bits to convert one number to another number
 * @n: 1st number
 * @m: 2nd number to convert to
 * Return: number of bits that was needed to swap
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int change;
	int tally;

	change = n ^ m;
	tally = 0;

	while (change)
	{
		tally++;
		change &= (change - 1);
	}

	return (tally);
}
