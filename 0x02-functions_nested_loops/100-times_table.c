#include "main.h"

/**
 *print_times_table - prints the n times table
 *@n: Muliplication table
 *Return: Nothing
 */
void print_times_table(int n)
{
	int a, b, res;

	if (!(n > 15 || n < 0))
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				res = (a * b);
				if (b != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (res < 10 && b != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((res % 10) + '0');
				}
				else if (res >= 10 && res < 100)
				{
					_putchar(' ');
					_putchar((res / 10) + '0');
					_putchar((res % 10) + '0');
				}
				else if (res >= 100 && b != 0)
				{
					_putchar((res / 100) + '0');
					_putchar((res / 10) % 10 + '0');
					_putchar((res % 10) + '0');
				}
				else
					_putchar((res % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
