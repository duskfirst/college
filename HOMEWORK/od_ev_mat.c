/*
3. to find the number of occurances of odd and even
numbers in a given matrix. also, print the odd and
even numbers.
*/
#include <stdio.h>

int main()
{
    int r, c;
    printf("Enter The size of matrix r x c:\n");
    scanf("%d %d", &r, &c);

    int mat[r][c], arr[r * c], ev_cnt = 0, od_cnt = 0;

    printf("Enter the Values In Matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("The Matrix is :\n");
    for (int i = 0; i < r; i++)
    {
        printf("|\t");
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("|\n");
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (mat[i][j] % 2 == 0)
            {
                arr[ev_cnt] = mat[i][j];
                ev_cnt += 1;
            }
            else
            {
                od_cnt += 1;
                arr[r * c - od_cnt] = mat[i][j];
            }
        }
    }
    
    printf("The Even Numbers In Matrix Are:\n");
    for (int i = 0; i < ev_cnt; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("The Odd Numbers In Matrix Are:\n");
    for (int i = 0; i < od_cnt; i++)
    {
        printf("%d ", arr[r * c - 1 - i]);
    }
}
