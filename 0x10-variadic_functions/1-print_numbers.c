#include"variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - The function prints numbers
 * @separator: The first variable
 * @n: number
 * Return: 0 success
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{
	unsigned int d;
	va_list args;

	va_start(args, n);

	for (d = 0; d < n; d++)
	{
		int num = va_arg(args, int);

		printf("%d", num);

		if (separator != NULL && d < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
