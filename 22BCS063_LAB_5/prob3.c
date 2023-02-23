 #include <stdio.h>
// binary search

int main()
{
    int low, hi, mid, n, key;
    int arr[11] = {1 ,3 ,5 , 9, 11, 17, 19, 22, 28, 32, 33};
    printf("Enter value to find\n");
    scanf("%d", &key);
    low = 0;
    hi = 10;
    mid = (low + hi) / 2;
    if (key > arr[10])
    {
        printf("%d is not present in the list \n", key);  
        return 0;
    }
    while (low <= hi) 
    {
        if (arr[mid] == key) 
        {
            printf("%d found at %d index\n", key, mid);
            return 0;
        }
        else if(arr[mid] < key)
        {
            low = mid + 1;
        } 
        else
        {
            hi = mid - 1;
        }
        mid = (low + hi)/2;
    }

    printf("%d is not present in the list \n", key);
    return 0;
}