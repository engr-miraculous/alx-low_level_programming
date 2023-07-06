#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse recursively.
 * @s: The string to be printed in reverse.
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
return;

_print_rev_recursion(s + 1); /* Move to the next character */
_putchar(*s); /* Print current character */
}
