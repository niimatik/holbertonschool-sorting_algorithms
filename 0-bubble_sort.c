#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: the array to sort and print
 * @size: ...
 *
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, tmp;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		if (array[j] > array[j + 1])
		{
			tmp = array[j + 1];
			array[j + 1] = array[j];
			array[j] = tmp;
			print_array(array, size);
		}
	}
}
