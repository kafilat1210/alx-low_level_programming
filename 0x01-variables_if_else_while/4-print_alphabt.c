#include <stdio.h>

/**
 *main - prints all lower case except 'q' and 'e'
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char lw;

	for (lw = 'a'; lw <= 'z'; lw++)
	{
		if (lw != 'e' && lw != 'q')
			putchar(lw)
	}
	putchar('\n');
	return (0);
}

