#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point for the program
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i, random, sum;
	char key[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char password[100];

	srand(time(NULL));
	sum = 0;
	i = 0;

	while (sum < (2772 - 122))
	{
		random = rand() % 62;
		password[i] = key[random];
		sum = sum + password[i];
		i++;
	}

	random = 2772 - sum;
	password[i] = random;
	i++;
	password[i] = '\0';
	printf("%s\n", password);

	return (0);
}
