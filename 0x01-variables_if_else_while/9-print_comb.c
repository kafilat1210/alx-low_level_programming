#include <stdio.h>

/**
 *main - prints the combination of numbers
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	int comb;

	for (comb = 48; comb <= 57; comb++)
	{
		putchar(comb);
		if (comb < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);

}

