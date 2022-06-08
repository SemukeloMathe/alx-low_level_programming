#include "main.h"

/**
 * print_last_digit - check main
 * @r: An integer input
 *
 * Description: This function prints the last digit of a number
 *
 * Return: last digit of number r
 */
int print_last_digit(int r)
{
	int o;

	if (r < 0)
		o = -1 * (r % 10);
	else
		o = r % 10;

	_putchar((o % 10) + '0');
		return (o % 10);
}
