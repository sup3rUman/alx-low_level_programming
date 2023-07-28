#include <stdio.h>

void my_startup_function(void) __attribute__((constructor));

/**
 * my_startup_function - Function to print the
 *	 message before main is executed.
 */

void my_startup_function(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}

/**
 * main - entry point
 * Return: Always 0;
 *
 */
int main(void)
{
	/* Your main function code goes here */

	return (0);
}
