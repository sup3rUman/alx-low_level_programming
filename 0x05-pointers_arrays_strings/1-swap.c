#include "main.h"

/**
 * swap_int - swaps two numbers
 * @a: int1
 * @b: int2
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
