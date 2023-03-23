#include "main.h"

/**
 * more_numbers - prints 10 times the number form 0 - 14
 * folowed by a new line
 *
 * Return: void
 */
void more_numbers(void)
{
	int count;
	int outer_count;
	int inner_count;

	for (count = 0; count <= 9; count++)
	{
		for (outer_count = 0; outer_count <= 1; outer_count++)
		{
			for (inner_count = 0; inner_count <= 14; inner_count++)
			{
				/* This break is necessary to prevent printing of 0 - 4 after 9 */
				/* also prevents printing a 0 after 9 */
				if (outer_count == 0 && inner_count > 9)
				{
					break;
				}

				/* stop sequence at 14 */
				if (outer_count == 1 && inner_count > 4)
				{
					break;
				}

				if (outer_count != 0)
				{
					_putchar('0' + outer_count);
				}

				_putchar('0' + (inner_count % 10));
			}
		}
		_putchar('\n');
	}
}
