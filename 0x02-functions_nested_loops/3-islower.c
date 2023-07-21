#include "main.h"

/**
 *_islower - check if char is lowercase
 *@c: is used to represent the character
 *
 *Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
