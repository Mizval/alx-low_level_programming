#include "main.h"

/**
* _print_numbers - Prints the number 0 up to 9
* Return: The numbers since 0 up to 9
*/
void print_numbers(void);


{
	char x;

	for (x = '0'; x <= '9'; x++)
	{
		_putchar(x + '0');
	}

	_putchar('\n');
}
