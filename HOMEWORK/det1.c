#include <stdio.h>
#include <stdlib.h>

int det(int s, int **a);

int main()
{
    //values for rows and columns
    int r, c, deter;
    printf("Enter The Order Of Matrix R x C\n");
    scanf("%d %d", &r, &c);

    //checks if the value is equal or not
    if (r != c)
    {
        printf("R and C must be equal\n");
        return 0;
    }

    //array declaration
    int **mat = (int**)malloc(r * sizeof(int*));
    for (int i = 0; i < c; i++)
    {
        mat[i] = (int*)malloc(c * sizeof(int*));
    }

    //values allocation in array
    printf("Enter The Values\n");
    for (int i = 0, a = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {

            scanf("%d", &a);
            mat[i][j] = a;
        }
    }

    //calling the funct
    deter = det(r, mat);
    
    //printing the matrix and determnant
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
    printf("The determinant is = %d\n", deter);

    //deallocation of array
    for (int i = 0; i < r; i++)
    {
        free(mat[i]);
    }
    free(mat);
}

int det(int s, int **a)
{
    int d = 0;

    //base condition
    if (s == 2)
    {
        d = a[0][0] * a[1][1] - a[0][1] * a[1][0];
        return d;
    }
    
    //minor array declare
    int **minor = (int**)malloc((s - 1) * sizeof(int*));
    for (int i = 0; i < s - 1; i++)
    {
        minor[i] = (int*)malloc((s - 1) * sizeof(int*));
    }

    //for finding the value for d = determinant
    int c1 = 0, c2 = 0; //indexes for minor
    for (int i = 0; i < s; i++) //helps transverse along the row i.e. 1st index
    {
        c1 = 0;
        c2 = 0;

        //giving the values inside minor
        for (int j = 1; j < s; j++)
        {
            for (int k = 0; k < s; k++)
            {
                if (k != i)
                {
                    minor[c1][c2] = a[j][k];
                    c2 += 1; 
                }
            }
            c1 += 1;
            c2 = 0;
        }
        d += (i % 2 ? -1 : 1) * a[0][i] * det(s - 1, minor);
    }

    for (int i = 0; i < s - 1; i++)
    {
        free(minor[i]);
    }
    free(minor);
    return d;  
}
