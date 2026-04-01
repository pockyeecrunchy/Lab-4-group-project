#include "Standard.h"
#include "InsertionSort.h"

void InsertionSort(int arr[], int size, int& comparisons, int& swaps)
{
    for (int currentIndex = 1; currentIndex < size; currentIndex++)
    {
        int temp = arr[currentIndex];
        int compareIndex = currentIndex - 1;

        // We enter the loop only if BOTH conditions are met.
        // If it fails on the first check (compareIndex >= 0), 0 comparisons? No, 1.
        // If it fails on the second check (arr[compareIndex] > temp), that's also 1 comparison.

        int shiftCount = 0;

        while (compareIndex >= 0)
        {
            comparisons++;

            if (arr[compareIndex] > temp)
            {
                arr[compareIndex + 1] = arr[compareIndex]; // shift
                compareIndex--;
                shiftCount++; // count shifts
            }
            else
            {
                break;
            }
        }

        arr[compareIndex + 1] = temp;

        // count ONE swap if something moved
        if (shiftCount > 0)
        {
            swaps++;
        }
    }
}