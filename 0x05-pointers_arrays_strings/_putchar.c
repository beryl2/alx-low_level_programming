#include <unistd.h>

/**
 * _putchar - writes the character c to srdout
 * @c: The character to print
 *
 * Return: o success 1
 * On error, -1 is returned, and errn is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
