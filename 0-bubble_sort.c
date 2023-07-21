#include "sort.h"

/**
 * bubble_sort -  sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: Array to be sorted
 * @size: The size of the array to be sorted
 * Return: Nothing.
 */

void bubble_sort(int *array, size_t size)
{
	int temp, i, j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}
