// Program to implement Insertion Sort Algorithm.

#include <stdio.h>

#define N 10

void InsertionSort(int array[])
{
    int key, j;
    for (int i = 1; i < N; i++)
    {
        key = array[i];
        j = i - 1;


        while((j >= 0) && array[j] > key){

            array[j+1] = array[j];
            j = j-1;
        }

        array[j+1] = key;
    }

    
    for(int i = 0 ; i < N; i++){
        printf("|\t%d\t|",array[i]);
    }
}

int main()
{
    int input[N];

    printf("\n\n\t\t\t#25 Program to implement Insertion Sort Algorithm\n\n\n");
    printf("Enter the value in array: ");

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &input[i]);
    }

    printf("The sorted array is:  ");
    InsertionSort(input);
    return 0;
}