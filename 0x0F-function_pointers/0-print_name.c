#include <stddef.h>

/**
 * print_name - Prints a given name using a specified function.
 *
 * @name: Pointer to the name to be printed.
 * @f: Pointer to a function that takes a char * parameter and returns void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
