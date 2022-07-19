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
 * shell_sort - sorts an array f integers in ascending order
 * @array: array to be sorted
 * @size: size of the array
 *
 * Return: nothing
 */
void shell_sort(int *array, size_t size)
{
	size_t gap, i, j, temp;

	for (gap = size / 2; gap >= 1; gap /= 2)
	{
		for (i = gap; i < size; i++)
		{
			temp = array[i];
			j = i - gap;
			while ((int)j >= 0 && (size_t)array[j] > temp)
			{
				array[j + gap] = array[j];
				j = j - gap;
			}
			array[j + gap] = temp;
		}
	}
}
