#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - Takes a date and prints how many days are
 *                        left in the year, taking leap years into account.
 * @month: Month in number format.
 * @day: Day of the month.
 * @year: Year.
 *
 * Return: void.
 */
void print_remaining_days(int month, int day, int year)
{
if ((year % 400 == 0 && year % 100 == 0) || (year % 4 == 0))
{
if (month > 2 || (month == 2 && day == 29))
{
printf("Day of the year: %d\n", day + 1);
printf("Remaining days: %d\n", 366 - (day + 1));
}
}
else
{
if (month == 2 && day == 29)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
}
else
{
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 365 - day);
}
}
}

