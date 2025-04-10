// Program to multiply two matrices and get the transpose of third one.

#include <stdio.h>
#include<conio.h>

int main()
{
    int a[2][2], b[2][2], result[2][2], transpose[2][2];
    int i, j, k;
    
    printf("\n\n\t\t\t#12 Program to multiply two matrices and get the transpose of third one.\n\n\n");
    printf("Enter elements of the first 2x2 matrix:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of the second 2x2 matrix:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            result[i][j] = 0;
            for (k = 0; k < 2; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transpose[j][i] = result[i][j];
        }
    }

    printf("\nResulting Matrix:\n\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\t%d ", result[i][j]);
        }
        printf("\n\n");
    }

    printf("\nTranspose of the Resulting Matrix:\n\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\t%d ", transpose[i][j]);
        }
        printf("\n\n");
    }

    getch();
    return 0;
}