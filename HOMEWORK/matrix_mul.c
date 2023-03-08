#include <stdio.h>
//matrix multiplication


void scan(int r, int c, int mat[r][c]);
void mul(int r1, int c, int c2, int mat1[r1][c], int mat2[c][c2], int pro[r1][c2]);

int main()
{
    int r1, r2, c1, c2;

    printf("Enter The order of First matrix r x c:\n");
    scanf("%d %d", &r1, &c1);
    
    printf("Enter The order of second matrix r x c:\n");
    scanf("%d %d", &r2, &c2);

    int a[r1][c1], b[r2][c2];

    printf("\nEnter elements of 1st matrix:\n");
    scan(r1 , c1, a);

    printf("Enter elements of 2nd matrix:\n");
    scan(r2, c2, b);
    
    if (c1 != r2)
    {
        printf("c1 and r2 must be equal");
        return 0;
    }

    int c[r1][c2];
    mul(r1, c1, c2, a, b, c);


    printf("The Product Of The Matrix\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}

void scan(int r, int c, int mat[r][c])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++) 
        {
            scanf("%d", &mat[i][j]);
        }
    }
    return;
}

void mul(int r1, int c, int c2, int mat1[r1][c], int mat2[c][c2], int pro[r1][c2])
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            pro[i][j] = 0;
            for (int k = 0; k < c; k++)
            {
                printf("%d\n", mat1[i][k]);
                pro[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    printf("The Product Of The Matrix\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ", pro[i][j]);
        }
        printf("\n");
    }
}