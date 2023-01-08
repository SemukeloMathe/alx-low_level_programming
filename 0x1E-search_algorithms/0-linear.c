#include "search_algos.h"

/*
 * linear_search - function that checks for an element in an array
 *
 * exit - return -1 if element not in array
 */

int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	while (i < size)
	{
		if (array[i] == value)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
