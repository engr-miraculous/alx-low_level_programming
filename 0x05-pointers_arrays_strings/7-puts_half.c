#include "main.h"

/**
 * _strlen - Calculates the length of a string
 * @s: Pointer to the string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
int length = 0;

while (s[length] != '\0')
length++;

return length;
}

/**
 * puts_half - Prints the second half of a string
 * @str: Pointer to the string to be printed
 */
void puts_half(char *str)
{
int length = _strlen(str);
int start_index = (length - 1) / 2;
int i;

for (i = start_index + 1; i < length; i++)
_putchar(str[i]);

_putchar('\n');
}

