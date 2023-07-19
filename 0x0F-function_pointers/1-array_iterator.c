#include <stddef.h>

/**
 * array_iterator - takes three params
 *
 * @array: Pointer to the integer array to be processed.
 * @size: Size of the array.
 * @action: Pointer to the function that will be applied to each array element.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		size_t i;
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
