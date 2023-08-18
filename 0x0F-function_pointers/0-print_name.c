#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name - Function print name
 * @name: first name to print
 * @f: holds function to the second name
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{

	if (name == NULL || f == NULL)
	return;

	f(name);
}
