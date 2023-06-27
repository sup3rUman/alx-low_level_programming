#include "main.h"
#include <limits.h>

/**
 * _atoi - converts string into an integer
 * @s:string
 *Return: int
 */

int _atoi(char *s)
{
int sign = 1;
int result = 0;

if (*s == '-')
	{
	sign = -1;
	s++;
	}

else if (*s == '+')
	{
	s++;
	}

while (*s >= '0' && *s <= '9')
	{
	result = result * 10 + (*s - '0');
	s++;
	}

	return (sign * result);
}
