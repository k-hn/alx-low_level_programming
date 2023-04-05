/**
 * print_chessboard - print out a chessboard
 *
 * @a: input array representing chessboard
 */
#include "main.h"

void print_chessboard(char (*a)[8])
{
	int row_count, column_count;

	for (column_count = 0; column_count < 8; column_count++)
	{
		for (row_count = 0; row_count < 8; row_count++)
		{
			_putchar(a[column_count][row_count]);
		}
		_putchar('\n');
	}
}
