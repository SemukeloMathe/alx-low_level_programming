#include "main.h"
/**
 * int factorial - returns the factorial of a given number.
 * @n - integer 
 * Return: 0 or -1(Error)
 */
int factorial(int n)
{
	if (n <= 1)
		return (1);
       return (n*factorial(n-1));
}
int main()
{
	int n = 2;

	printf("%i", factorial(n));
	return (0);
}
