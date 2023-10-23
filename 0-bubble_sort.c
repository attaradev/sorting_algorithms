#include <stdio.h>

void bubble_sort(int *array, size_t size)
{
    int temp;
    int swapped;

    if (size <= 1)
        return;

    for (size_t i = 0; i < size - 1; i++)
    {
        swapped = 0;
        for (size_t j = 0; j < size - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                // Swap array[j] and array[j + 1]
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = 1;

                // Print the array after each swap
                for (size_t k = 0; k < size; k++)
                {
                    printf("%d", array[k]);
                    if (k < size - 1)
                        printf(", ");
                }
                printf("\n");
            }
        }

        // If no swaps occurred in this pass, the array is already sorted.
        if (!swapped)
            break;
    }
}
