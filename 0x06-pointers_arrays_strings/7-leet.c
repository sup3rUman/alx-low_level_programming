#include "main.h"


/**
 * leet - encodes a string into 1337
 * @str: string
 * Return: stri
 */

char *leet(char *str)
{
	char *ptr = str;
	char *leetChars = "AEOTL";
	char *leetReplacements = "43071";

	while (*ptr != '\0')
		{
		int i;

		for (i = 0; i < 5; i++)
			{
			if (*ptr == leetChars[i] || *ptr == leetChars[i] + 32)
				{
				*ptr = leetReplacements[i];
				break;
				}
			}
		ptr++;
		}
	return (str);
}
