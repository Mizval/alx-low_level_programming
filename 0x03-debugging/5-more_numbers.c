#include "main.h"

/**
 * more_number - Print function that prints 10 times the numbers
 * from 0 to 14 followed by a new line
 */

void more_numbers(void);
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar ('1');
			_putcher(j % 10 + '0');
		}
		_putchar('\n');
	}
}

