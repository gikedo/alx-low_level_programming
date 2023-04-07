#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - transforms a binary number to an unsigned int
 * @b: character string
 * Return: converted decimal number or 0 if a char can't be converted
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total, power;
	int rang;

	if (b == NULL)
		return (0);

	for (rang = 0; b[rang]; rang++)
	{
		if (b[rang] != '0' && b[rang] != '1')
			return (0);
	}

	for (power = 1, total = 0, rang--; rang >= 0; rang--, power *= 2)
	{
		if (b[rang] == '1')
			total += power;
	}

	return (total);
}
