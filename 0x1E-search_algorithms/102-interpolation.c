#include<stdio.h>
#include "search_algos.h"

/**
* interpolation_search - Linear search function
* @array: Pointer to integer
* @size: length of array
* @value: value to search
*
* Return: -1 if not find or array null, otherwise index of element founded
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	low = 0;
	high = size - 1;
	if (array == NULL)
		return (-1);

	pos = low + (((double)(high - low) / (array[high] - array[low]))
		   * (value - array[low]));

	while (pos < size)
	{
		/*print_i(array, pos);*/
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			   * (value - array[low]));
	}
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
