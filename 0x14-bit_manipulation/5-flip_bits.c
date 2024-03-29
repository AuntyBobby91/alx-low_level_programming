#include "main.h"

/**
 * flip_bits - counts number of bits to change
 * getting from one number to another
 * @n: The first number
 * @m: The second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int f, count = 0;
	unsigned long int current;
	unsigned long int exclusive = f ^ m;

	for (i = 63; f >= 0; f--)
	{
		current = exclusive >> f;
		if (current & 1)
			count++;
	}

	return (count);
}

