#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point of the program
 *
 * Description: This function generates a random number and determines
 *              whether it is positive, negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n == 0)
{
	printf("%d is zero\n", n);
	return (0);
}
	else if (n < 0)
{
	printf("%d is negative\n", n);
	return (0);
}
	else
{
	printf("%d is positive\n", n);
}

	return (0);
}
