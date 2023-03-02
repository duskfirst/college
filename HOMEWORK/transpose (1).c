/*
Transpose
*/
#include <stdio.h>

int main()
{
    int r, c;
    printf("Enter The Order Of Matrix :\n");
    scanf("%d %d", &r, &c);    

    int mat[r][c], num=0;
    printf("Enter The values of matrix :\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &num);
            mat[i][j]=num;
        }
    }

        for (int i = 0; i < r; i++)
    {
        printf("| ");
        for (int j = 0; j < c; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("|\n");
    }
    printf("The Tranpose is \n");

    for (int i = 0; i < c; i++)
    {
        printf("| ");
        for (int j = 0; j < r; j++)
        {
            printf("%d ", mat[j][i]);
        }
        printf("|\n");
    }
}

