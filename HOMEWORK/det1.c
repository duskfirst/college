#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int det(int s, int **a)
{
    int d = 0, arr[s -1][s -1];
    if (s == 2)
    {
        d = a[0][0] * a[1][1] - a[0][1] * a[1][0];
        return d;
    }
    int **ar = (int**)malloc((s - 1) * sizeof(int*));
    for (int i = 0; i < s - 1; i++)
    {
        ar[i] = (int*)malloc((s - 1) * sizeof(int*));
    }

    int c1 = 0, c2 = 0; 
    for (int i = 0; i < s; i++)
    {
        c1 = 0;
        c2 = 0;
        for (int j = 1; j < s; j++)
        {
            for (int k = 0; k < s; k++)
            {
                if (k != i)
                {
                    arr[c1][c2] = a[j][k];
                    c2 += 1; 
                }
            }
            c1 += 1;
            c2 = 0;
        }
        for (int i = 0; i < s; i++)
        {
            ar[i] = &arr[i][0];
        }
        d += pow(-1,i) * a[0][i] * det(s - 1, ar);
    }
    return d;  
}

int main(void)
{
    int r, c, deter;
    printf("Enter The Order Of Matrix R x C\n");
    scanf("%d %d", &r, &c);

    if (r != c)
    {
        printf("R and C must be equal\n");
        return 0;
    }

    int mat[r][r];

    printf("Enter The Values\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    
    int **arr = (int**)malloc(r * sizeof(int*));
    for (int i = 0; i < c; i++)
    {
        arr[i] = (int*)malloc(c * sizeof(int*));
    }
    for (int i = 0; i < r; i++)
    {
        arr[i] = &mat[i][0];
    }
    deter = det(r, arr);
    
    printf("The Determinant of the Given Matrix is:\n");
    for (int i = 0; i < r; i++)
    {
        printf("|\t");
        for(int j = 0; j < r; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("|");
        printf("\n");
    }
    printf("%d\n", deter);
}