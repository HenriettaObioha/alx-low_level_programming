#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: chars string of 0 and 1
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;  /* unsigned int cannot return  negative  */
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] == '1' || b[i] == '0')
	{
		a += b[i] - '0';
		a <<= 1;
		i++;
	}
	return (a);
}
