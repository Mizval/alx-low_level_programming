#include <stdio.h>

/**
 * main - prints the alphabet in lowercsse
 * followed by a new line, except q and e
 * Return: Always 0
 */
int main(void)
{
	char c;

	c = 'a';
	while
		(c <= 'z') {
			if ((c != 'q' && c != 'e') && c <= 'z')
				putchar(c);
			c++;
		}
	putchar('\n');

	return (0);
}
