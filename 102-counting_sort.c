#include "sort.h"

/**
 * swap - swap x with y
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
 * find_max - find max value
 * @array: array to be sorted
 * @n: size of the array
 *
 * Return: max value
 *
 */
int find_max(int *array, int n)
{
	int max = INT_MIN;
	int i;

	for (i = 0; i < n; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
		}
	}
	return (max);
}

/**
 * counting_sort - function that sorts an array of integers in ascending order
 * @array: array to be sorted
 * @size: size of the array
 *
 * Return: nothing
 */
void counting_sort(int *array, size_t size)
{
	size_t i, j, max, *C;

	if (array == NULL || size < 2)
	{
		return;
	}

	max = find_max(array, size);
	C = malloc(sizeof(size_t) * (max + 1));

	for (i = 0; i < max + 1; i++)
	{
		C[i] = 0;
	}
	for (i = 0; i < size; i++)
	{
		C[array[i]]++;
	}

	i = 0;
	j = 0;

	while (j < max + 1)
	{
		if (C[j] > 0)
		{
			array[i++] = j;
			C[j]--;
		}
		else
		{
			j++;
		}
	}
	free(C);
}
