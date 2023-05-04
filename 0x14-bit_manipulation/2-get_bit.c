#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns value of given bit at a given index
 * @n: number
 * @index: index that starts from 0
 * Return: value of bit at index || -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int a;
	int b;

	a = (sizeof(unsigned long int) * 8);

	if (index > a)
		return (-1);

	b = ((n >> index) & 1);
	return (b);
}
