#include "main.h"

/**
 * set_bit - Sets bit at given index to 1
 * @n: Pointer to the number to change
 * @index: index of bit set to 1
 *
 * Return: 1 success, -1 failure
 */
int set_bit(unsigned long int *b, unsigned int index)
{
	if (index > 63)
		return (-1);

	*b = ((1UL << index) | *b);
	return (1);
}

