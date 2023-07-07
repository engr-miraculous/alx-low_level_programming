#include "main.h"

/**
 * is_prime_recursive - Helper function to check prime number recursively.
 * @n: The number to be checked.
 * @divisor: The divisor to check divisibility.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_recursive(int n, int divisor)
{
if (n < 2) /* Base case: numbers less than 2 are not prime */
return (0);

if (divisor == n) /* Base case: divisor reaches the number itself */
return (1);

if (n % divisor == 0) /* Bc:number is divisible by divisor */
return (0);

return (is_prime_recursive(n, divisor + 1)); /*Recursive call of divisor +1*/
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
return (is_prime_recursive(n, 2)); /*Call helper function initial divisor 2*/
}

