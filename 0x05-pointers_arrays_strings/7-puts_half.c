#include "main.h"

/**
  *puts_half - prints half of a string
  *@str: string value to be halved
  *
  *Return: void
  */

void puts_half(char *str)
{
	int a, b;
	char ch;

	for (a = 0; str[a] != '\0'; a++)
	{
		;
	}
	b = (a + 1) / 2;
	for (; str[b] != 0; b++)
	{
		ch = str[b];
		_putchar(ch);
	}
	_putchar('\n');
}
