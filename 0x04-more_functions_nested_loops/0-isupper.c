#include "main.h"

/**
 * _isupper - checks for upprcase letters
 * @c: letter to check
 * Return: 1 on success
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
else
	{
	return (0);
	}
}
