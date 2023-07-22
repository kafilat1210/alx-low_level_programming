#include "main.h"

/**
  *print_last_digit - entry point of the problem
  *@r: character variable
  *Return: Always 0
  */

int print_last_digit(int r)
{
	if (r < 0)
	{
		r *= -1;
	}
	_putchar((r % 10) + '0');
	return (r % 10);
}
