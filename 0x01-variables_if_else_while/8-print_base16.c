#include <stdio.h>

/**
 *main - This program prints all the number of base 16
 *in lowercase, followed by a new line.
 *Return: Always 0 (success)
 */

int main(void)
{
	char bs;
	int x;

	for (bs = '0'; bs <= '9'; bs++)
		putchar(bs);
	for (x = 97; x <= 102; x++)
		putchar((int)x);

	putchar('\n');

	return (0);

}
