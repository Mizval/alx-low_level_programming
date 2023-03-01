#include "main.h"

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n';

	/*
	 * _ write your line of code here...
	 * _ Remember:
	 * - you are not allowed to use a
	 * _ you are not allowed to modify p
	 * _ only one statement
	 * _ you are not allowed to code anything else than this line of code
	 */
	*(p + 5) = 98;
	/* ...So that this 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
