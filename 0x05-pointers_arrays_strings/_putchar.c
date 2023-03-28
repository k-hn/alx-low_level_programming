#include <unistd.h>

/**
 * _putchar
 *
 * Description: Writes a character to stdout
 * 
 * Param(s):
 * char c - character to print
 *
 * Return: 1 - sucess, -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
