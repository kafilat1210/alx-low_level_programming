#include <stdio.h>

/**
 * Function definition for positive_or_negative
 */

void positive_or_negative(int n)
{
    if (n > 0)
    {
        printf("%d is positive\n", n);
    }
    else if (n < 0)
    {
        printf("%d is negative\n", n);
    }
    else
    {
        printf("0 is zero\n");
    }
}
