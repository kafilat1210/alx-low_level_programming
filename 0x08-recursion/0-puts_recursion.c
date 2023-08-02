#include "main.h"

/**
 *_puts_recursion - print a string given
 * without using a loop
 *
 *@s:This is the given string
 */

void -puts_recursion(char *s)
{
	if (*s)
	{
		-putschar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		-putchar('\n');
	}
}
