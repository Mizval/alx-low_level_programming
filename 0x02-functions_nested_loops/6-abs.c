#include "main.h"

/**
 * __abs - Computes the absolute value of an integer
 * @c : number to check
 * Return:0 or 1
 */

int _abs(int c)

{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
