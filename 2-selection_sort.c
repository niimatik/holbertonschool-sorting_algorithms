#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @array: the array to sort
 * @size: the size of the array
 *
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, min;
	int tmp;

	if (array == NULL || size == 0)
		return;

	while (i < size - 1)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		tmp =array[i];
		array[i] = array[min];
		array[min] = tmp;
		print_array(array, size);
		i++;
	}
}
