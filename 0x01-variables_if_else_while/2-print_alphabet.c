#include <stdio.h>

/**
 *main - print in the alphabets in lower case
 *
 *Return: Always 0 (Success)
 */

int main(void)
{

	int op;

	for (op = 97; op <= 122; op++)
	{
		putchar(op);
	}
	putchar('\n');

	return (0);
}
