/*
4. to sort the rows of the matrix in ascending & columns
in descending order.
*/
#include <stdio.h>

//for ascending order
void asc_sort(int r, int c, int **arr);

//for descending order
void dsc_sort(int r, int c, int **arr);

//main funct
int main()
{
    int r, c;
    printf("Enter the Order of matrix r x c:\n");
    scanf("%d %d", &r, &c);
    int mat[r][c];

    //taking the input for matrix
    printf("Enter The values Of matrix\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    //printing the given matrix
    for (int i = 0; i < r; i++)
    {
        printf("|\t");
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("|\t");
        printf("\n");
    }
    printf("\n\n");

    //arranging in ascending order
    for (int k = 0; k < r; k++)
    {
        int flag = 1;
        while(flag != 0)
        {
            flag = 0;
            int a;
            for (int j = 0; j < c - 1; j++)
            {
                for (int i = 0; i < c - j - 1; i++)
                {
                    if (mat[k][i + 1] < mat[k][i])
                    {
                        a = mat[k][i + 1];
                        mat[k][i + 1] = mat[k][i];
                        mat[k][i] = a;
                        flag += 1;
                    }
                }
            }
        }
    }
    //arranging in descending order
    for (int k = 0; k < c; k++)
    {
        int flag = 1;
        while(flag != 0)
        {
            flag = 0;
            int a;
            for (int j = 0; j < r - 1; j++)
            {
                for (int i = 0; i < r - j - 1; i++)
                {
                    if (mat[i + 1][k] > mat[i][k])
                    {
                        a = mat[i + 1][k];
                        mat[i + 1][k] = mat[i][k];
                        mat[i][k] = a;
                        flag += 1;
                    }
                }
            }
        }
    }
    
    //printing the solved matrix
    for (int i = 0; i < r; i++)
    {
        printf("|\t");
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("|\t");
        printf("\n");
    }
}
