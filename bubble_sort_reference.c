#include <stdio.h>

// a VERY basic bubble sort algorithm

int main(void)
{
    int arr[7] = {20, 8, 9, 26, 80, 12, 38};
    int N = 7;

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

    for (int i = 0; i < N; i++)
    {
        printf("a[%d] = %d\n", i, arr[i]);
    }

    return 0;
}


/*
#include<stdio.h>

int main(void)
{
   // int arr[7] = {8, 12, 20, 9, 26, 38, 80};
    int arr[7] = {20, 8, 9, 26, 80, 12, 38};
    int N = 7;

    int count_bad = 0;
    for(int i = 0; i<N-1; i++){   // goes to N-1 so that i+1 is not out of bounds
        if ( arr[i] > arr[i+1] ){
            count_bad++;
            break;
            //return 0;
        }
    }

    if (count_bad == 0) {
        printf("sorted");
    }
    else{
        printf("not sorted");
    }


    for(int i = 0; i<N-1; i++){   // goes to N-1 so that i+1 is not out of bounds
        if ( arr[i] > arr[i+1] ){
            //swap arr[i] with arr[i+1]

        }
    }

    printf("Bye");

    return 0;
}
*/

