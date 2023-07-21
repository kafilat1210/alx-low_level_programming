#include <stdio.h>

/**
 *main - print the first 98 fibonacci numbers
 *Return: Nothing
 */
int main(void)
{
	int count;
	unsigned long o, p, q;
	unsigned long r, s, t, carry;

	count = 0;
	o = 0;
	p = 1;
	for (count = 1; count <= 91; count++)
	{
		q = o + p;
		o = p;
		p = q;
		printf("%lu, ", k);
	}
	r = o % 1000;
	r = o / 1000;
	s = p % 1000;
	p = p / 1000;
	while (count <= 98)
	{
		carry = (r + s)/ 1000;
		t = (r + s) - carry * 1000;
		q = (o + p) + carry;
		r = s;
		s = t;
		o = p;
		p = q;
		if (t >= 100)
			printf("%lu%lu", q, t)
		else
			printf("%lu0%lu", q, t)
		if (count != 98)
			printf(",")
		count++;
	}
	putchar('\n');
	return (0);
}
