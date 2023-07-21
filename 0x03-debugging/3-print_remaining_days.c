#include <stdio.h>
#include "main.h"

/**
 *printing_remaining_days - take a date and print
 *@year: year
 *@leap year: taking leap year into account
 *@month: month in number format
 *@day
 */

void print_remaining_day(int day, int month, int year)
{
	if ((year % 100 == 0 && 400 ==0) || (year % 4 ==0
))
	{
		if (month > 2 && day >= 60)
		{
			day++;
		}
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
		printf("Invalid date: %02d/%02d/%04d\n",
month, day - 31, year);
		}
		{
			printf("Day of the year: %d\n", day);
			printf(Remaining days:%D\n", 365 - day);
		}
	}

}

