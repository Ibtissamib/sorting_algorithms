# include "sort.h"
#include <stdio.h>
/**
 *selection_sort-selectio
 *@array: int *
 *@size: size_t
 *Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 1, k = 0;
	int temp;

	while (i < size)
	{
		temp = array[i];
		while (j < size)
		{
			if (temp > array[j])
			{
				temp = array[j];
				k = j;
			}
			j++;
		}
		if (k != 0)
		{
			array[k] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
		i++;
		j = i + 1;
		k = 0;
	}
}
