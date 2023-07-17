#include <stdio.h>

/**
 *main - prints the alphabet in reverse
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	char bs;

	for (bs = 'z'; bs >= 'a'; bs--)
	{
		putchar(bs);
	}
	putchar('\n');
	return (0);
}
