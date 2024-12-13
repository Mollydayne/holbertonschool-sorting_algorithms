#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * swap - function that exchange to integers
 * @a: input
 * @b: input
 */

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - function that sorts an array of integers
 * in ascending order using the selection sort algorithm.
 * @array: The array to be sorted.
 * @size: Number of elements in @array.
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	
	for (i = 0; i < size - 1; i++)
	{
		size_t jMin = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[jMin])
				jMin = j;
		}

		if (jMin != i)
		{
			swap(&array[i], &array[jMin]);
			print_array(array, size);
		}
	}
}
