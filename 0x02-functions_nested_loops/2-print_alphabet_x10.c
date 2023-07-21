#include "main.h"

/**
 *print_alphabet_x10 - Entry point of alphabet x10
 *Return: always void (success)
 */

void print_alphabet_x10(void)
{
	int a = 0, i;

	if (a <= 9)
	{
		a++;
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
