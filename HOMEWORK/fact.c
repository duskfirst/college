#include <stdio.h>

void fact(int n, int a);
int main()
{
    int n;
    printf("Enter number: \t.a/.");
    scanf("%d", &n);

    fact(n, 1);
    return 0;
}

void fact(int n, int a)
{
    if (n == 1)
    {
        printf("%d\n", a);
        return;
    }
    fact(n - 1, a * n);
}