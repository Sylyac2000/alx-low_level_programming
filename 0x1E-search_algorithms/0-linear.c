#include<stdio.h>

/**
* linear_search - Linear search function
* @array: Pointer to integer
* @size: length of array
* @value: value to search
*
* Return: -1 if not find or array null, otherwise index of element founded
*/
int linear_search(int *array, size_t size, int value)
{
	int index;
	size_t i;

	index = -1;
	if (array == NULL)
		return (index);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, *(array + i));

		if (*(array + i) == value)
		{
			index = i;
			return (index);
		}

	}
	return (-1);

}
