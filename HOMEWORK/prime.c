#include <stdio.h>

int check_prime(int n);

int main()
{
    int n, flag;
    printf("Enter The Number to check\n");
    scanf("%d", &n);

    flag = check_prime(n);

    if (flag == 0)
    {
        printf("Number is prime");
    }
    else
    {
        printf("Number is not a prime");
    }

    return 0;
}

int check_prime(int n)
{
    for (int i = 2; i < n - 1; i++)
    {
        if (n % i == 0)
        {
            return 1;
        }
    }

    return 0;
}