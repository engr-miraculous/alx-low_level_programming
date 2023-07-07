#include "main.h"

/**
 * sqrt_recursive - Helper function to calculate the square root recursively.
 * @n: The number to calculate the square root of.
 * @guess: The current guess for the square root.
 *
 * Return: The square root if found, -1 if not found.
 */
int sqrt_recursive(int n, int guess)
{
if (guess * guess == n) /* Base case: square root found */
return (guess);

if (guess * guess > n) /* Base case: square root not found */
return (-1);

return (sqrt_recursive(n, guess + 1)); /* Recursive call, incremented guess */
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The square root if found, -1 if not found.
 */
int _sqrt_recursion(int n)
{
if (n < 0) /* Check for negative number */
return (-1);

return (sqrt_recursive(n, 0)); /* Call helper function with initial guess 0 */
}
