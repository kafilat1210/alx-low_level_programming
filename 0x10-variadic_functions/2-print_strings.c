#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - strings to print
 * @separator: the string printed in-between strings
 * @n: number of strings passed to the function
 * Return: NULL or sucess
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int b;
	va_list args;

	va_start(args, n);

	for (b = 0; b < n; b++)
	{
		char *str = va_arg(args, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && b < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);
	printf("\n");
}
