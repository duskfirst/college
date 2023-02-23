// Linear search
#include <stdio.h>

int main()
{
    int l, key;
    printf("Enter The size Of Array : ");
    scanf("%d", &l);
    
    int arr[l];

    printf("Enter The Values for Array : ");
    for (int i = 0; i < l; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter The Number To search In Array : ");
    scanf("%d", &key);

    for (int j = 0; j < l; j++)
    {
        if(key == arr[j])
        {
            printf("Number is Found\n");
            return 0;
        }
    }
    printf("Number Is Not Found\n");
    return 0;

}