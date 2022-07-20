#include "sort.h"

/**
 * merge - merge
 * @array: array
 * @l: left
 * @mid: mid
 * @h: right
 *
 * return: nothing
 */
void merge(int *array, int l, int mid, int h)
{
	int i = l;
	int j = mid + 1;
	int k = l;
	int B[100];

	while (i <= mid && j <= h)
	{
		if (array[i] < array[j])
			B[k++] = array[i++];
		else
			B[k++] = array[j++];
	}
	for (; i <= mid; i++)
		B[k++] = array[i];
	for (; j <= h; j++)
		B[k++] = array[j];
	for (i = l; i <= h; i++)
		array[i] = B[i];
}

/**
 * merge_sort - function that sorts an array of integers in ascending order
 * @array: array to be sorted
 * @size: size of the array
 *
 * Return: nothing
 */
void merge_sort(int *array, size_t size)
{
	size_t p, l, h, mid, i;

	for (p = 2; p <= size; p = p * 2)
	{
		for (i = 0; i + p - 1 < size; i = i + p)
		{
			l = i;
			h = i + p - 1;
			mid = (l + h) / 2;
			merge(array, l, mid, h);
		}
		if (size - i > p / 2)
		{
			l = i;
			h = i + p - 1;
			mid = (l + h) / 2;
			merge(array, l, mid, size - 1);
		}
	}
	if (p / 2 < size)
	{
		merge(array, 0, p / 2 - 1, size - 1);
	}
}
