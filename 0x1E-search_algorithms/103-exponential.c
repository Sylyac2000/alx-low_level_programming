#include<stdio.h>
#include "search_algos.h"

/**
* exponential_search - Linear search function
* @array: Pointer to integer
* @size: length of array
* @value: value to search
*
* Return: -1 if not find or array null, otherwise index of element founded
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (do_binary_search(array, i / 2, right, value));
}

/**
* do_binary_search - Linear search function
* @array: Pointer to integer
* @size: length of array
* @value: value to search
*
* Return: -1 if not find or array null, otherwise index of element founded
*/
int do_binary_search(int *array, size_t size, int value)
{
	int index, debut, fin, milieu;

	index = -1;
	debut = 0;
	fin = size - 1;

	if (array == NULL)
		return (index);

	while (debut <= fin)
	{
		print_arr(array, debut, fin);
		milieu = (debut + fin) / 2;
		if (*(array + milieu) == value)
		{
			index = milieu;
			return (index);

		}
		else
		{
			if (*(array + milieu) >= value)
			{
				fin = milieu - 1;
			}
			else
			{
				debut = milieu + 1;
			}
		}

	}

	return (index);

}
