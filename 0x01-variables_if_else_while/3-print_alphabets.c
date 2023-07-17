#include <stdio.h>

/**
 *main - printing alphabet in both lower and upper case
 *
 *Return: Always 0 (succcess)
 */

int main(void)
{
	int op;

	for (op = 97; op <= 122; op++)
	{
		putchar(op);
	}
	for (op = 65; op <= 90; op++)
	{
		putchar(op);
	}
	putchar('\n');

	return (0);

}
