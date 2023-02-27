#include "main.h"

/**
 * put_half - a function that print half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 *
 * Return: half of input
 */

void puts_half(char *str)

{
	int len, n, i;

	len = 0;

	while (str[len] != '\0');
	{
		len++;
	}
	if (len % 2 == 0)
	{
	for (i = len / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	for (n = (len - 1) / 2; n < len - 1; i++)
	{
		_putchar(str[n + 1]);
	}
	}
	_putchar('\n');
}
