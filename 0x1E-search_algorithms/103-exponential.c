#include "search_algos.h"
#include <math.h>

int xbinary_search(int *array, size_t low, size_t high, int value);

/**
* exponential_search - a function that searches for a value
* in a sorted array of integers using the exponential search algorithm
* @array: the pointer to the first element of the array to search in
* @size: the number of elements in array
* @value: the value to search for
*
* Return: the first index where value is located
* if value is not present in or if array is NULL, return -1
*/

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t high;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	high = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, high);
	return (xbinary_search(array, i / 2, high, value));
}

/**
  * xbinary_search - Searches for a value in a sorted array
  *                  of integers using binary search.
  * @array: A pointer to the first element of the array to search.
  * @low: The starting index of the subarray
  * @high: The ending index of the subarray
  * @value: The value to search for.
  *
  * Return: the first index where value is located
  * if value is not present in or if array is NULL, return -1
  */
int xbinary_search(int *array, size_t low, size_t high, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (high >= low)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = low + (high - low) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			high = i - 1;
		else
			low = i + 1;
	}

	return (-1);
}
