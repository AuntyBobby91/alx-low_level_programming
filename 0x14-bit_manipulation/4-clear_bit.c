#include "main.h"

/**
 * clear_bit - Sets value of given bit to 0
 * @n: Pointer to the number to change
 * @index: index of bit to clear
 *
 * Return: 1 success, -1 failure
 */
int clear_bit(unsigned long int *d, unsigned int index)
{
	if (index > 63)
		return (-1);

	*d = (~(1UL << index) & *d);
	return (1);
}

