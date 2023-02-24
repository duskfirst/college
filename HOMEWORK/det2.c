#include <stdio.h>
#include <stdlib.h>

int det(int s, int **a, int skp1, int skp2)
{
    int d = 0;
    if (s == 2)
    {
        d = a[0][0] * a[1][1] - a[0][1] * a[1][0];
        return d;
    }
    int c1 = 0, c2 = 0; 
    for (int i = s - 1; i >= 0; i--)
    {
        if (skp2 == i) continue;
        for (int j = 0; j < s; j++)
        {
            skp1 = j;
            d += (i % 2 ? -1 : 1) * a[j][i] * det(s - 1, a, skp1, skp2 + 1);
            skp1 = 0;
        }
    }

    for (int i = 0; i < s - 1; i++)
    {
        free(ar[i]);
    }
    free(ar);
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

    int **arr = (int**)malloc(r * sizeof(int*));
    for (int i = 0; i < c; i++)
    {
        arr[i] = (int*)malloc(c * sizeof(int*));
    }
    int a;
    printf("Enter The Values\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {

            scanf("%d", &a);
            arr[i][j] = a;
        }
    }

    deter = det(r, arr, -1, -1);
    
    printf("The Determinant of the Given Matrix is:\n");
    for (int i = 0; i < r; i++)
    {
        printf("|\t");
        for(int j = 0; j < r; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("|");
        printf("\n");
    }
    printf("%d\n", deter);
    for (int i = 0; i < r; i++)
    {
        free(arr[i]);
    }
    free(arr);
}