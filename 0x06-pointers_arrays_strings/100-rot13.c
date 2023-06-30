#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher
 * @str: The string to encode
 *
 * Return: A pointer to the encoded string
 */
char *rot13(char *str)
{
int i, j;
char alphabets[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

i = 0;
while (str[i] != '\0')
{
j = 0;
while (alphabets[j] != '\0')
{
if (str[i] == alphabets[j])
{
str[i] = rot13[j];
break;
}
j++;
}
i++;
}

return (str);
}
