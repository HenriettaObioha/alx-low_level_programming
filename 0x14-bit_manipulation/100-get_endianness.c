#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if BE, then 1 if LE
 */
int get_endianness(void)
{
	int num = 1;

	if (*(char *)&num == 1)
		return (1);
	else
		return (0);
}
