#include "sort.h"
/**
 * swap - swap values of x and y
 * @x: value of x
 * @y: value y
 * Return: nothing
 */
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * selection_sort - sort
 * @array: array to sort
 * @size: size of array
 * Return: nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, k;

	for (i = 0; i < size - 1; i++)
	{
		for (j = k = i; j < size; j++)
		{
			if (array[j] < array[k])
				k = j;
		}
		swap(&array[i], &array[k]);
	}
}
