#include "main.h"

/**
  *print_alphabet_x10 - prints the value of the alphabet ten times
  *
  *Return: Always void (success)
  */

void print_alphabet_x10(void)
{
	int a = 0;
	char f;

	while (a < 10)
	{
		a++;
		for (f = 97; f <= 122; f++)
		{
			_putchar(f);
		}
		_putchar('\n');
	}
}
