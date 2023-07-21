#include <stdio.h>

/**
 *Largest_Number - return the largest of 3 Numbers
 *@a:First integer
 *@b: Second integer
 *@c: third integer
 * Return: Largest number
 */

int  largest_number(int a, int b, int c)
{
	int largest;
	if (a > b && c > a)
	{
		largest = a;
	}
	else if(a > b && c > a)
	{
		largest = c;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	returm (largest;)
}
