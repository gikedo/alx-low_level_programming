#include "main.h"

/**
 * get_endianness - checks for endianness
 * Return: 0 if big endian, or 1 if little endian
 */
int get_endianness(void)
{
	int fig;

	fig = 1;
	if (*(char *)&fig == 1)
		return (1);
	else
		return (0);
}
