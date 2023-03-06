#include "main.h"

/**
 * *_memcpy - program copies memory area
 * @dest: the destination memory area
 * @src: the memory area to copy from
 * @n: the number of bytes to copy
 *
 * Return: pointer to the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
