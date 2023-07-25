#include "main.h"

/**
  *_strcpy - copies the file of an array into a buffer
  *@dest: buffer that holds the copued array
  *@src: buffer to be copied into dest
  *
  *Return: a character (dest)
  */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != 0; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
