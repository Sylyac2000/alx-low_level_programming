#include<stdio.h>
#include "search_algos.h"

/**
* binary_search - Linear search function
* @array: Pointer to integer
* @size: length of array
* @value: value to search
*
* Return: -1 if not find or array null, otherwise index of element founded
*/
int binary_search(int *array, size_t size, int value)
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

/**
 * print_arr - helper func to print array everytime array is halved
 * @array: array
 * @left: left index of original array
 * @right: right index of original array
 */
void print_arr(int *array, size_t left, size_t right)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		if (i != right)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}
