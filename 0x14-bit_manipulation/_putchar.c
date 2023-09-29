#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes Char c to stdout
 * @c: Character to print
 *
 * Return: On success 1.
 * On error, -1 has been returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

