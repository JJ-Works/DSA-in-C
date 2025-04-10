// Program to implement Bubble sort algorithm.

#include<stdio.h>
#include<conio.h>
#include<string.h>

#define N 3

void Sort(int arr[]){
    int i,j,temp;

    for(i = 0 ; i < N - 1 ; i++){
        for(j = 0 ; j < N - i - 1 ; j++){
            if(arr[j]>arr[j+1]){
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            }
        }
    }
    printf("Values After Sorting: ");
    for(i = 0; i< N; i++){
        printf("| \t%d\t|",arr[i]);
    }

    return;
}
int main(){
    int input[N];

    printf("\n\n\t\t\t#24 Program to implement Bubble Sort Algorithm.\n\n");
    printf("Enter the values: ");
    for (int i = 0; i < N; i++)
    {
    scanf("%d",&input[i]);
        
    }
    printf("Values Before Sorting: ");
    for (int i = 0; i < N; i++)
    {
        printf("|\t%d\t|",input[i]);
    }
    
    printf("\n\n\n\n");
    Sort(input);

    return 0;
}