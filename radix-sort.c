#include <stdio.h>

// Function to get the highest value
int getMax(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;

}

// Counting sort function adapted for Radix
void countingSort(int arr[], int n, int exp)
{
    int output[n];
    int count[10] = {0};

    // Counts digit occurrences
    for (int i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    // Calculates actual positions
    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // Build stable output array
    for (int i = n - 1; i >= 0; i--)
    {
        int idx = (arr[i] / exp) % 10;

        output[count[idx] - 1] = arr[i];
        count[idx]--;
    }

    // Copy back
    for (int i = 0; i < n; i++)
        arr[i] = output[i];

    
}

// Main function of Radix sort
void radixSort(int arr[], int n)
{
    int max = getMax(arr, n);

    // Applies counting sort to each digit
    for (int exp = 1; max / exp > 0; exp *= 10)
        countingSort(arr, n, exp);
}

// Function for print an array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

