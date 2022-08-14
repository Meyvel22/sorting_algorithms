#include "sort.h"

/**
 * _swap - function that swaps two integers.
 * @array: the array of integers
 * @x: First integer
 * @y: Second integer
 *
 */
void _swap(int *array, int x, int y)
{
	int sort;

	if (array[x] != array[y])
	{
		sort = array[x];
		array[x] = array[y];
		array[y] = sort;
	}
}

/**
 * shell_sort - function that sorts an array of integers in ascending order
 * @array: The array of integers to sort
 * @size: Size of the array
 *
 */
void shell_sort(int *array, size_t size)
{
	size_t s = 0,  x, y;

	if (size < 2)
		return;

	while (s <= size / 3)
		s = s * 3 + 1;

	while (s >= 1)
	{
		for (x = s; x < size; x++)
			for (y = x; y >= s && array[y] < array[y - s]; y -= s)
				_swap(array, y, y - s);
		s /= 3;
		print_array(array, size);
	}
}
