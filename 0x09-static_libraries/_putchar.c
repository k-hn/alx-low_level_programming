#include <unistd.h>

/**
 * _putchar - Writes a character to stdout
 *
 * @c: character to print
 *
 * Return: 1 - sucess, -1 - error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
