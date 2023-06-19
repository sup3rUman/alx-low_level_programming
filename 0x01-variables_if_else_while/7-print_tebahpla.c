#include <stdio.h>

/**
 * main - Entry point
 * @void - null
 * Return: Always 0 (success)
 */

int main(void)
{
char letter;

for (letter = 'z'; letter >= 'a'; letter--)
	{
	putchar(letter);
	}
	putchar('\n');
	return (0);
}
