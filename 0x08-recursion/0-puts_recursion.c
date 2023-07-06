#include "main.h"

/**
 * _puts_recursion - Prints a string recursively.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n'); /* Print newline */
return;
}

_putchar(*s); /* Print current character */
_puts_recursion(s + 1); /* Move to the next character */
}
