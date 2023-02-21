#include "main.h"

/**
 * print_last_digit -program  prints the last digit of a number
 * @i: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int i)
{
	int a;

	if (i < 0)
		i = -i;

	a = i % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
