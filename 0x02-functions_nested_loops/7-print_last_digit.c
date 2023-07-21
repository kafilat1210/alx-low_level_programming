#include "main.h"

/**
 *print last digit - entry point
 *@r: character variable
 *Return: Always 0
 */

int print_last_digit(int r)
{
	if(r < 0)
	{
		r *= -1;
	}
	_putchar((r% 10) + 'o');
		return (r % 10);
}
