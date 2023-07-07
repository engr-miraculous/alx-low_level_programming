#include "main.h"

/**
 * wildcmp - Compares two strings considering the special character *.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0') /* Base case: both strings are empty */
return (1);

if (*s2 == '*')
{
if (*(s2 + 1) == '*') /* Skip consecutive * characters */
return (wildcmp(s1, s2 + 1));
if (*s1 == '\0') /* Base case: s2 has a single * and s1 is empty */
return (wildcmp(s1, s2 + 1));
return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2)); /* Recursive call for*/
 /* matching or * skipping */
}

if (*s1 == '\0' || *s1 != *s2) /* Base case: characters don't match */
return (0);

return (wildcmp(s1 + 1, s2 + 1)); /* Recursive call for the next characters */
}
