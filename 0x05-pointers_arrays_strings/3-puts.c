#include "main.h"

/**
  *_puts - prints the a string array
  *@str: array to be printed
  *
  *Return: void
  */

void _puts(char *str)
{
	int ln;

	for (ln = 0; str[ln] != '\0'; ln++)
	{
		_putchar(str[ln]);
	}
	_putchar('\n');
}
