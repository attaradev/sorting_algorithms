#include "sort.h"
/**
 * bubble_sort - sort array elements from min to max value
 * @array: array
 * @size: array size
 */
void bubble_sort(int *array, size_t size)
{

	size_t i, j;
	int temp, swapped;

	if (size < 2)
		return;
	
	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = 1;
				print_array(array, size);
			}
		}
		
		if (!swapped)
			break;
	}
}
