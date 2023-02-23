//TO check the prime numbers
#include<stdio.h>

int main()
{
    int l, h, flag;
    do
    {
        printf("Enter the lower limit :");
        scanf("%d", &l);
        printf("Enter the upper limit :");
        scanf("%d", &h);
    }
    while(l < 1 || h < 1 || h < l);

    for (int i = l; i <= h; i++)
    {
        if (i == 1)
        {
            printf("1 is Neither Prime Nor Composite\n");
            continue;
        }
        flag = 1;
        for (int j = 2; j < i - 1; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
            
        }
        if (flag == 1)
        {
            printf("%d is a Prime\n", i);
        }
        else
        {
            printf("%d is a Composite\n", i);
        }
    }
}
