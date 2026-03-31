#include "Standard.h"
#include "BubbleSort.h"

void BubbleSort(int arr[], int size, int& comparisons, int& swaps)
{

    for (int pass = 0; pass < size - 1; pass++)
    {

        for (int index = 0; index < size - pass - 1; index++)
        {
            // Increment comparison count for each comparison made
            comparisons++;    

            if (arr[index] > arr[index + 1])
            {
                // Increment swap count for each swap made
                swaps++;   
                int temp = arr[index];
                arr[index] = arr[index + 1];
                arr[index + 1] = temp;
            }
        }
    }
}