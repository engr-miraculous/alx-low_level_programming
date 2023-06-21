#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the first 50 Fibonacci
 * numbers separated by comma and space.
 *
 * Return: Always 0
 */
int main(void)
{
int limit = 50;
long int prev = 1;
long int current = 2;
long int next;
int i;

printf("%ld, %ld", prev, current);

for (i = 3; i <= limit; i++)
{
next = prev + current;
printf(", %ld", next);

prev = current;
current = next;
}

printf("\n");

return (0);
}

