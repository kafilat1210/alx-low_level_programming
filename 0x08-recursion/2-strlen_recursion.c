#include "main.h"

/**
 *_string_recursion - String length return
 *
 *@s: string given
 *
 *Return: Length of the string given
 *
 **/

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (_string_recursion(s + 1) + 1);
	}
	return (0);
}
