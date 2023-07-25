#include "main.h"

/**
  *rev_string - reversing an array
  *@s: array to be reversed
  *
  *Return: void
  */

void rev_string(char *s)
{
	int j, i;
	char ch;

	i = 0;
	for (j = 0; s[j] != '\0'; j++)
	{
		;
	}
	for (j = j - 1; j > i; j--)
	{
		ch = s[j];
		s[j] = s[i];
		s[i] = ch;
		i++;
	}
}
