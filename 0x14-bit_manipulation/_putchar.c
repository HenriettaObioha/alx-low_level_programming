#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: character to print
 * Return: on success 1, on error, -1
 * and errno is set appropriately
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
