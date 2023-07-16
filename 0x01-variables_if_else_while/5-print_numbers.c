#include <stdio.h>

/**
 *main - prints single digits
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int num_sing;

	for (num_sing = 48; num_sing <= 57; num_sing++)
	{
		putchar(num_sing);
	}
	putchar('\n');
	return (0);

}
