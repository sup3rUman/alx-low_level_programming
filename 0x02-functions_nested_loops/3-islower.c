#include "main.h"

/**
 * _islower - checks lower case
 * @c:  char to check
 * Return: Return 1 on success
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}
