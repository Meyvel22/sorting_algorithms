#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * @array: array to bubble sorted
 * @size: size of array to be bubble sorted
 *
 */
void bubble_sort(int *array, size_t size)
{
	int sort;
	unsigned int x, y;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size - 1; y++)
		{
			if (array[y] > array[y + 1])
			{
				sort = array[y];
				array[y] = array[y + 1];
				array[y + 1] = sort;
				print_array((const int *)array, size);
			}
		}
	}
}
