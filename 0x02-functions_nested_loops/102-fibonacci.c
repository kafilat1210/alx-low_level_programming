#include <stdio.h>

/**
 *main - print the first 50 fibonacci numbers
 *Return: Nothing
 */
int main(void)
{
	unsigned long count r, s, t;
	
	r = 0;
	s = 1;
	for (count = 0; count < 50; count++)
	{
		t = r + s;
		r = s;
		s = t;
		printf("%lu", t);
		if (count == 49)
			putchar('\n');
		else
		{
			printf(",");
		}
	}
	return (0);
}
