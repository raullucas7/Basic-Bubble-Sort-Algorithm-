#include <stdio.h>

// a bubble sort algorithm optimized by a function

void bubble_sort(int arr[], int N);

int main(void)
{
    int arr[7] = {20, 8, 9, 26, 80, 12, 38};
    int N = 7;

    bubble_sort(arr, N);

    for (int i = 0; i < N; i++)
    {
        printf("a[%d] = %d\n", i, arr[i]);
    }
    return 0;
}


void bubble_sort (int arr[], int N)
{
    for (int i = 0; i < N; i++) // outer loop: number of passes
    {
        for (int j = 0; j < N - 1; j++) // the passes themselves and the swap (N-1 for the last element, it doesnt have to be compared)
        {
            if (arr[j] < arr[j + 1]) // swap numbers ( '<' for greatest to least vice versa)
            {
                int temp = arr[j]; // temp stores arr[j]
                arr[j] = arr[j + 1]; // overwrite arr[j] w/ arr[j+1]
                arr[j + 1] = temp; // arr[j+1] becomes temp
            }
        }
    }
}
