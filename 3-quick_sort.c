#include "sort.h"

/**
 * swap - swap integer
 * @src: first int to swap
 * @dest: second to swap
 *
 * Return: void
 */

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
 * @left: the start of the array
 * @right: the end of the array
 *
 * Return: void
 */

int lomuto_sort(int *array, size_t size, int left, int right)
{
	int pivot = array[right];
	int above = left;
	int bellow;

	for (bellow = left; bellow < right; bellow++)
	{
		if (array[bellow] < pivot)
		{
			if (above < bellow)
			{
				swap(&array[bellow], &array[above]);
				print_array(array, size);
			}
			above++;
		}
	}
	if (array[above] > pivot)
	{
		swap(&array[above], &array[right]);
		print_array(array, size);
	}
	return (above);
}

/**
 * lomuto_change - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: the array to sort
 * @size: the size of the array
 * @left: the start of the array
 * @right: the end of the array
 *
 * Return: void
 */

void lomuto_change(int *array, size_t size, int left, int right)
{
	int p;

	if (right - left > 0)
	{
		p = lomuto_sort(array, size, left, right);
		lomuto_change(array, size, left, p - 1);
		lomuto_change(array, size, p + 1, right);
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

	lomuto_change(array, size, 0, size - 1);
}
