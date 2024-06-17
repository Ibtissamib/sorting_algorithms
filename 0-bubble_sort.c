# include "sort.h"
/**
  *bubble_sort- bubble sorting algorithm
  *@array: pointer to int
  *@size: size_t
  */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j;
	int temp = 0;

	if (size < 2)
		return;
	for (j = size - 1; j >= 1; j--)
		for (i = 0; i < j; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
			if (temp != 0)
				print_array(array, size);
			temp = 0;
		}
}
