#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
int count = 0;
unsigned long int fib1 = 1;
unsigned long int fib2 = 2;
unsigned long int fib_next;

printf("%lu, %lu", fib1, fib2);
count += 2;

while (count < 98)
{
fib_next = fib1 + fib2;
printf(", %lu", fib_next);
fib1 = fib2;
fib2 = fib_next;
count++;
}

printf("\n");

return (0);
}
