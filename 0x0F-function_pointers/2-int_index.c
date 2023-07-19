#include <stddef.h>

/**
 * int_index - Searches for an integer in an array
 * @array: Pointer to the integer array to be searched.
 * @size: Number of elements in the array
 * @cmp: Pointer to the function that compares integer values.
 *
 * Return: always 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL && size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
