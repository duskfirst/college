#include <stdio.h>
#include <math.h>

void minor(int s, int arr[s][s],int b[s - 1][s - 1], int m, int n);
int det(int s, int a[s][s]);


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

    deter = det(r, mat);
    
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


int det(int s, int a[s][s])
{
    int d = 0, arr[s -1][s -1];
    if (s == 1)
    {
        d = a[0][0];
        return d;
    }
    int c1 = 0, c2 = 0; 
    for (int i = 0; i < s; i++)
    {
        minor(s, a, arr, 0, i);
        d += pow(-1,i) * a[0][i] * det(s - 1, arr);
    }
    return d;  
}

void minor(int s, int arr[s][s],int b[s - 1][s - 1], int m, int n)
{
    int c1 = 0;
    int c2 = 0;
    for (int i = 0; i < s; i++)
    {
        if (i == m)
        {
            continue;
        }
        printf("i = %d", i);
        for (int j = 0; j < s; j++)
        {
            if (j == n)
            {
                continue;
            }
            printf("j = %d", j);
            b[c1][c2] = arr[i][j];
            c2 += 1;
        }
        c2 = 0;
        c1 += 1;
    }
    return;
}
