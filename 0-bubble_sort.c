#include "sort.h"
/**
 * bubble_sort - sort array elements from min to max value
 * @array: array
 * @size: array size
 */
void bubble_sort(int *array, size_t size)
{

	int swapped, tmp = 0;

	if (size <= 1)
		return;
	
	for (size_t i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (size_t j = 0; j < size - 1; j++)
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
