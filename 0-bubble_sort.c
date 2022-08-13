#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * @array: array to bubble sorted
 * @size: size of array to be bubble sorted
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t x;
	int temp, sort;

	if (!array || size == 0)
		return;

	do {
		sort = 1;
		for (x = 0; x < size - 1; x++)
		{
			if (array[x] > array[x + 1])
			{
				sort = 0;
				temp = array[x];
				array[x] = array[x + 1];
				array[x + 1] = temp;
				print_array(array, size);
			}
		}

	} while (sort == 0);
}
