#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Calculates and prints the first
 * 98 Fibonacci numbers
 *  separated by commas and a space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int count = 0;
unsigned long long fib1 = 1;
unsigned long long fib2 = 2;
unsigned long long fib_next;

printf("%llu, %llu", fib1, fib2);
count += 2;

while (count < 98)
{
fib_next = fib1 + fib2;
printf(", %llu", fib_next);
fib1 = fib2;
fib2 = fib_next;
count++;
}

printf("\n");

return (0);
}
