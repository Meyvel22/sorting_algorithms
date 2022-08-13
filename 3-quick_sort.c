#include "sort.h"

/**
  * partition - divide the array into into.
  * @array: array to be partition.
  * @left: first element of the array.
  * @right: last element in the array.
  * @size: size of the array.
  *
  * Return: the index of the array from where the check should begin.
  */
int partition(int *array, int left, int right, size_t size)
{
	int pivot = array[right];
	int x = left - 1, y, sort;

	for (y = left; y <= right; y++)
	{
		if (array[y]  <= pivot)
		{
			x++;
			if (x != y)
			{
				sort = array[x];
				array[x] = array[y];
				array[y] = sort;
				print_array(array, size);
			}
		}
	}
	return (x);
}

/**
  * lomuto_qsort - sort an array of integers
  * @array: array to be sorted.
  * @left: first element in array.
  * @right: last element in array.
  * @size: size of the array.
  *
  */
void lomuto_qsort(int *array, int left, int right, size_t size)
{
	int i = 0;

	if (left < right)
	{
		i = partition(array, left, right, size);
		lomuto_qsort(array, left, i - 1, size);
		lomuto_qsort(array, i + 1, right, size);
	}
}

/**
  * quick_sort - sorts an array of integers in ascending order.
  * @array: array to be sorted.
  * @size: size of the array.
  *
  *
  */
void quick_sort(int *array, size_t size)
{

	lomuto_qsort(array, 0, size - 1, size);
}
