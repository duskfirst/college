//bubble sort
#include <stdio.h>
  
void bubble(int arr[], int s)
{
    int flag = 1;
    while(flag != 0)
    {
        flag = 0;
        int a;
        for (int j = 0; j < s - 1; j++)
        {
            for (int i = 0; i < s - j - 1; i++)
            {
                if (arr[i + 1] < arr[i])
                {
                    a = arr[i + 1];
                    arr[i + 1] = arr[i];
                    arr[i] = a;
                    flag += 1;
                }
            }
        }
    }
    return;
}

int main()
{
    int s;
    printf("Enter The Size Of Array\n");
    scanf("%d", &s);
    int arr[s];
    printf("Enter The Values in Array\n");
    for (int i = 0; i < s; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    bubble(arr, s);

    for (int i = 0; i < s; i++)
    {
        printf("%d ", arr[i]);
    }
}

