#include "main.h"

/**
 * _isalpha - checks for lower and upper case letters
 * @c: letter to check
 * Return: 1 (success) 0 otherwise
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
else
	return (0);
}
