#include "search_algos.h"

/**
* binary_search - a function that searches for a value
* in an array of integers using the binary search algorithm
* @array: the pointer to the first element of the array to search in
* @size: the number of elements in array
* @value: the value to search for
*
* Return: the first index where value is l	ocated
* if value is not present in or if array is NULL, return -1
*/

int binary_search(int *array, size_t size, int value)
{
	int high = size - 1;
	int low = 0;
	int mid, i;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		mid = low + (high - low) / 2; /*Prevent overflow*/
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i == high)
				printf("%d", array[i]);
			else
				printf("%d, ", array[i]);
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
