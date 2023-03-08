#include <stdio.h>

int check_prime(int n);
void range(int l ,int h);

int main()
{
    int l, h;
    printf("Enter The Lower range Value\n");
    scanf("%d", &l);
    printf("Enter The Upper range Value\n");
    scanf("%d", &h);
    range(l ,h);
    return 0;
}
void range(int l, int h)
{
    int flag;
    for (int i = l; i <= h; i++)
    {
        flag = check_prime(i);

        flag == 0 ? printf("%d is a Prime\n", i) : printf("%d is not a Prime\n", i);
    }
    return;
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