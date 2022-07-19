#include "sort.h"
/**
 * swap - swap value of x and y
 * @x: value of x
 * @y: value of y
 *
 * Return: nothing
 */
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * lomuto_partition - partition
 * @array: the array of integers.
 * @size: the size of the array.
 * @left: The starting index of the subset
 * @right: The ending index of the subset
 *
 * Return: the final partition
 */
int lomuto_partition(int *array, size_t size, int left, int right)
{
	int *pivot, above, below;

	pivot = array + right;
	for (above = below = left; below < right; below++)
	{
		if (array[below] < *pivot)
		{
			if (above < below)
			{
				swap(array + below, array + above);
				print_array(array, size);
			}
			above++;
		}
	}

	if (array[above] > *pivot)
	{
		swap(array + above, pivot);
		print_array(array, size);
	}
	return (above);
}
/**
 * lomuto_sort - implement the quicksort algorithm through recursion
 * @array: array of integers
 * @size: size of arrays.
 * @left: start index of the array
 * @right: ending index of the array
 *
 * Return: nothing
 */
void lomuto_sort(int *array, size_t size, int left, int right)
{
	int a;

	if (right - left > 0)
	{
		a = lomuto_partition(array, size, left, right);
		lomuto_sort(array, size, left, a - 1);
		lomuto_sort(array, size, a + 1, right);
	}
}


/**
 * quick_sort - sorts an array of integers in ascending order
 * @array: array to be sorted
 * @size: size of the array
 *
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	lomuto_sort(array, size, 0, size - 1);
}
