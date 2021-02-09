#include "palindrome.h"
#include <stdlib.h>

/**
 * is_palindrome - unction that checks whether or
 * not a given unsigned integer is a palindrome
 * @n: is the number to be checked
 * Return: 1 if n is a palindrome, and 0 otherwise
 */
int is_palindrome(unsigned long n)
{

	const int value = snprintf(NULL, 0, "%lu", n);
	char buffer[value + 1];
	int c = snprintf(buffer, value + 1, "%lu", n);
	int i = 0;
	char start, end;

	for (i = 0; i < c; i++)
	{
		start = buffer[i];
		end = buffer[(c - 1) - i];
		if (start != end)
		{
			return (0);
		}
	}

	return (1);
}
