#include <stdlib.h>
#include <stdio.h>
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
 * quick_sort - Sorts an array of integers in ascending order
 *              using the Quick sort algorithm.
 * @array: Pointer to the array of integers to be sorted.
 * @size: The size of the array.
 *
 * Description: This function implements the Quick sort algorithm.
 *
 *
 * Return: None.
 */

void quick_sort(int *array, size_t size)

{

    sinze_t pivot = 0;

    if (array == NULL || size < 2)
    {
        return;
    }

    

}