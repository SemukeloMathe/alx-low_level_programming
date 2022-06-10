#include "main.h"
/**
 * print_square - prints a square, followed by a new line.
 * @size: size of the square.
 * Return:  print the square with character #.
 */
void print_square(int size)
{
	int i, j;

	if (size < 0)
		_putchar(10);

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		_putchar(10);
	}
	_putchar('\n');
	return (0);
}
