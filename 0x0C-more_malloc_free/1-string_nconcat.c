#include <stdlib.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strlen - calculate and return string length
 * @string: string
 * Return: string length
 */
int _strlen(char *string)
{
	int k;

	for (k = 0; string[k] != '\0'; k++)
		;
	return (k);
}
/**
 * string_nconcat - concatenate s1 and n bytes of s2; return ptr to string
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes to concat from string 2
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int num, len, k, j;

	num = n;

	if (s1 == NULL) /* account for NULL strings */
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0) /* account for negative n bytes */
		return (NULL);
	if (num >= _strlen(s2)) /* account for n too big */
		num = _strlen(s2);

	len = _strlen(s1) + num + 1; /* +1 to account for null pointer */

	ptr = malloc(sizeof(*ptr) * len); /* malloc and check for error */
	if (ptr == NULL)
		return (NULL);

	for (k = 0; s1[k] != '\0'; k++) /* concat */
		ptr[k] = s1[k];
	for (j = 0; j < num; j++)
		ptr[k + j] = s2[j];
	ptr[k + j] = '\0';

	return (ptr);
}
