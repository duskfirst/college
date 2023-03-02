/*
Develop a C program to find the determinant of a given 3x3 matrix.s
*/
#include <stdio.h>

int main()
{

    int mat[3][3], d = 0, temp = 0,arr[2][2];

    printf("Enter The values of matrix :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    int c1 = 0, c2 = 0; 
    for (int i = 0; i < 3; i++)
    {
        c1 = 0;
        c2 = 0;
        for (int j = 1; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (k != i)
                {
                    arr[c1][c2] = mat[j][k];
                    c2 += 1; 
                }
            }
            c1 += 1;
            c2 = 0;     
        }
        int a = 1;
        if (i % 2 != 0)
        {
            a = -1;
        }
        temp = arr[0][0] * arr[1][1] - arr[0][1] * arr[1][0];
        d += a * mat[0][i] * temp;
    }
    printf("Determinant of given matrix is %d\n", d);

}