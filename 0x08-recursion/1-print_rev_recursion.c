#include "main.h"

/**
 *_print_rev_recursion - Display the given string
 *in reverse order.
 *
 *@s: String given
 *
 **/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
	}
	if (*s)
	{
		_putchar(*s);
	}
}
