#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints binary representation of a number
 * @n: the decimal number to print
 */
void print_binary(unsigned long int n) /* void does not return a value */
{
	while (n) /* arrays not allowed */
	{
		if (n & 1)
			printf("1");
		else
			printf("0");
		n >>= 1;
	}
	printf("\n");
}
