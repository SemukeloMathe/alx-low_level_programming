#include "main.h"
/**
  * print_rev - Returns the length of a string.
  * @s: char pointer.
  * Return: length of a string.
  */
void print_rev(char *s)
{
	int len = 0;

	while (*s[len] != '\0')
	{
		len++;
	}

	while (len)
	{
		_putchar(s[--len]);
	}
	_putchar('\n');
}
