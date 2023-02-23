 #include <stdio.h>
// matrix addition

int main()
{
  int r, c;
  printf("Enter the number of rows: ");
  scanf("%d", &r);
  printf("Enter the number of columns: ");
  scanf("%d", &c);

  int a[r][c], b[r][c], sum[r][c];

  printf("\nEnter elements of 1st matrix:\n");
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++) 
    {
      printf("Enter element a %d %d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  }

  printf("Enter elements of 2nd matrix:\n");
  
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++) 
    {
      printf("Enter element b %d %d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }
  }

  // adding two matrices
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++) 
    {
      sum[i][j] = a[i][j] + b[i][j];
    }
  }

  // printing the result
  printf("Sum of two matrices: \n");
  for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++) 
        {
            printf("%d   ", sum[i][j]);
            if (j == c - 1) 
            {
                printf("\n\n");
            }
        }

    }

  return 0;
}