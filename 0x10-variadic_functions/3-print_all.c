#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything based on the format provided
 * @format: A list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	char current_format;

	va_start(args, format);

	while (format && format[i])
	{
		current_format = format[i];
		i++;

		 if (i > 1)
			 printf(", ");

		 switch (current_format)
		 {
		 case 'c':
			 printf("%c", va_arg(args, int));
			 break;

		case 'i':
			 printf("%d", va_arg(args, int));
			 break;

		case 'f':
			 printf("%f", va_arg(args, double));
			 break;

		case 's':
			 str = va_arg(args, char *);

			 if (str == NULL)
				 str = "(nil)";
			 printf("%s", str);

			 break;
		default:
			 continue;
		 }
	}
	va_end(args);

	printf("\n");
}
