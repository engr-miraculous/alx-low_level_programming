#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to modify
 *
 * Return: A pointer to the modified string
 */
char *cap_string(char *str)
{
int i = 0;

/* Capitalize the first letter if it's a lowercase letter */
if (str[i] >= 'a' && str[i] <= 'z')
str[i] = str[i] - 32;

while (str[i] != '\0')
{
/* Check for word separators */
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}')
{
/* Capitalize the next letter if it's a lowercase letter */
if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
str[i + 1] = str[i + 1] - 32;
}

i++;
}

return (str);
}
