#include "main.h"

/**
 *_isupper - uppercase letters
 *@c: variable to test
 *
 *Return: Always 0, success
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
