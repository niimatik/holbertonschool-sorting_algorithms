#include "sort.h"

void swap(int *src, int *dest)
{
	int tmp;

	tmp = *src;
	*src = *dest;
	*dest = tmp;
}

/**
 * lomuto_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: the array to sort
 * @size: the size of the array
 *
 * Return: void
 */

void lomuto_sort(int *array, size_t size, int left, int right)
{
	int *pivot, above, bellow;

	pivot = array + right;
	for (above = bellow = left; bellow < right; bellow++)
	{
		if (array[bellow] < *pivot)
		{
			if (above < bellow)
			{
				swap(array + bellow, array + above);
				print_array(array, size);
			}
			above++;
		}
		if (array[above] > *pivot)
		{
			swap(array + above, pivot);
			print_array(array, size);
		}
	}
}

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

	lomuto_sort(array, size, 0, size - 1);
}
