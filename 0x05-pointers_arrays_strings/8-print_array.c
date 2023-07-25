#include "main.h"
#include <stdio.h>

/**
  *print_array - entry point of the program
  *@a: pointer of an array
  *@n: variable
  *
  *Return: void
  */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (b != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
