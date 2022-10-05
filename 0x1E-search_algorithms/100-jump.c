#include<stdio.h>
#include<math.h>
#include "search_algos.h"

/**
* jump_search - Linear search function
* @array: Pointer to integer
* @size: length of array
* @value: value to search
*
* Return: -1 if not find or array null, otherwise index of element founded
*/

int jump_search(int *array, size_t size, int value)
{
	size_t i, saut, pas;

	if (array == NULL || size == 0)
		return (-1);

	pas = sqrt(size);
	for (i = saut = 0; saut < size && array[saut] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", saut, array[saut]);
		i = saut;
		saut += pas;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, saut);

	saut = saut < size - 1 ? saut : size - 1;
	for (; i < saut && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);

}
