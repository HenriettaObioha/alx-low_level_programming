#include "main.h"
#include <stdio.h>

/**
 * flip_bits - counts number of bits to be flipped
 * @n: number.
 * @m: number to flip into
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor = n ^ m, flip_bits = 0;

	while (xor > 0)
	{
		flip_bits += (xor & 1);
		xor >>= 1;
	}

	return (flip_bits);
}
