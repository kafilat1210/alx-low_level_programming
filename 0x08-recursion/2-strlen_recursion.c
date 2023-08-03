#include "main.h"

/**
 * _strlen_recursion - This function returns length of a string
 *
 * @s: string given
 *
 * Return: Always 0 success
 *
 */

int _strlen_recursion(char *s) /* string length return*/
{
	if (*s)
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);
}
