#include "main.h"

/**
 *_isalpha - Entry point
 *@c: character to be checked
 *
 *Return: Always 0
 */

int _isalpha(int c)
{
	if (c >= 65 || c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
