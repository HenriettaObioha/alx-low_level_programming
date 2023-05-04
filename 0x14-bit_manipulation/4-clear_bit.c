#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets value of bit to 0 at given index
 * @index: index position
 * @n: number
 * Return: 1 if it worked, -1 if on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;

	if (index > 64)
	return (-1);
	for (a = 1; index > 0; index--, a *= 2)
	;
	*n += a;

	return (1);
}
