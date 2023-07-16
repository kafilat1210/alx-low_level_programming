#include <stdio.h>

/**
 *main - print in the alphabets in lower case
 *
 *Return: Always 0 (Success)
 */

int main(void)
{

	char Ab;

	for (Ab = 'a'; Ab <= 'z'; Ab++)
	{
		putchar(Ab);
	}
	putchar('\n');

	return (0);
}
