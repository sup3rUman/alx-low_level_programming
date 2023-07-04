#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer to the destination memory area where the data will be copied.
 * @src:  pointer to the source memory area from where the data will be copied.
 * @n: number of bytes to be copied.
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

return (dest);
}
