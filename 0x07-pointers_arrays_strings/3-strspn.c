#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer to a string to be examined
 * @accept: pointer to the string containing characters to be accepted
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found, i;

	while (*s != '\0')
	{
		found = 0;

		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				found  = 1;

				break;
			}
		}
		if (found == 0)
		{
			break;
		}
		count++;
		s++;
	}
	return (count);
}
