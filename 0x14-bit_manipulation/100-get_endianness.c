#include "main.h"

/**
 * get_endianness - checks machine if it is little or big endian
 * Return: 0 big, 1 little
 */
int get_endianness(void)
{
	unsigned int e = 1;
	char *b = (char *) &e;

	return (*b);
}

