#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: the array to sort
 * @size: the size of the array
 *
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	lomuto_sort(array, size)
}

/**
 * lomuto_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: the array to sort
 * @size: the size of the array
 *
 * Return: void
 */

void lomuto_sort(int *array, size_t size)
{
	size_t i = 0, j = size - 1, tmp, pivot;

	while (i < size - 1)
	{
		tmp = i;
		while (j > i)
		{
			if (i > j)
			{
				swap(array[i], array[j]);
			}

		}
	}
}

void swap(size_t src, size_t dest)
{
	size_t tmp;

	tmp = src;
	src = dest;
	dest = tmp;
}