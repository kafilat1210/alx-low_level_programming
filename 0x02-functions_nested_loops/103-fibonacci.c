#include <stdio.h>

/**
 *main - sum even fibonacci numbers under 4 million
 *Return: Nothing
 */
int main(void)
{
	unsigned long count, o, p, q sums;

	o = sums = 0;
	p = 1;
	for (count = 0; count < 50, count ++)
	{
		q = o + p;
		o = p;
		p = q;
		if (q % 2 == 0 && k < 4000000)
		{
			sums += k;
		}
	}
	printf("%lu\n", sums);
	return (0);
}
