#include <stdio.h>
#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: First number
 * @n2: Second number
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 *
 * Return: Pointer to the result (r), or 0 if the result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, sum = 0, carry = 0, i = 0, j = 0;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	if (len1 >= size_r || len2 >= size_r)
		return (0);

	len1--;
	len2--;
	i = len1 > len2 ? len1 : len2;
	r[i + 1] = '\0';

	while (i >= 0)
	{
		sum = carry;
		if (len1 >= 0)
			sum += n1[len1--] - '0';
		if (len2 >= 0)
			sum += n2[len2--] - '0';

		carry = sum / 10;
		r[i--] = (sum % 10) + '0';
	}

	if (carry)
	{
		if (i < 0 || i + 1 >= size_r)
			return (0);
		r[i + 1] = carry + '0';
		return (r + i + 1);
	}

	if (i < -1 || i + 2 >= size_r)
		return (0);

	return (r + i + 2);
}

