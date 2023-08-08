#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concat string
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	a = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);
	if (a == NULL)
		return (NULL);

	for (k = 0, l = 0; k  < (i + j + 1); k++)
	{
		if (k < i)
			a[k] = s1[k];
		else
			a[k] = s2[l++];
	}

	return (a);
}
