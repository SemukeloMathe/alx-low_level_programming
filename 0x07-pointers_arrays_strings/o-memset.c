#include "main.h"
/**
 * char *_memset - function that fills memory with a constant byte.
 * @*s - 1st char
 * @b - 2nd char.
 * @n - 3rd char.
 * Return: 0;
 */
char *_memset(char *S, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		s[index] = b;
	return (s);
}
