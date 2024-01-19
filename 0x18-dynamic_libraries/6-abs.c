#include "main.h"

/**
  *_abs - entry point for the code
  *@n: integer value
  *
  *Return: always 0
  */

int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	return (n);
}
