#include <stdio.h>
//matrix multiplication

int main()
{
    int r1, r2, c1, c2;

    printf("Enter The order of First matrix r x c:\n");
    scanf("%d %d", &r1, &c1);
    
    printf("Enter The order of second matrix r x c:\n");
    scanf("%d %d", &r2, &c2);

    int a[r1][c1], b[r2][c2];

    printf("\nEnter elements of 1st matrix:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++) 
        {
        printf("Enter element a %d %d: ", i + 1, j + 1);
        scanf("%d", &a[i][j]);
        }

    }

    printf("Enter elements of 2nd matrix:\n");
    
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++) 
        {
        printf("Enter element b %d %d: ", i + 1, j + 1);
        scanf("%d", &b[i][j]);
        }
    } 
    
    if (c1 == r2)
    {
        int c[r1][c2];
        int n = r2;
        int sum = 0;
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                c[i][j] = 0;
                for (int k = 0; k < n; k++)
                {
                    sum += a[i][k] * b[k][j];
                }
                c[i][j] = sum;
                sum = 0;
            }
        }

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

    else
    {
        printf("The matrix multiplication cannot happen.\n");
    }
}