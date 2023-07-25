#include "main.h"

/**
  *puts2 - prints every other character
  *@str: string to be printed
  *
  *Return: void
  */

void puts2(char *str)
{
	int i;
	char sh;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			sh = str[i];
			_putchar(sh);
		}
	}
	_putchar('\n');
}
