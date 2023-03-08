#include <stdio.h>

// void fibo(int n);
void go(int n, int a, int b);

int main()
{
    int n;
    printf("Enter The number of Elements\n");
    scanf("%d", &n);
    go(n, 0, 1);
    return 0;
}

// void fibo(int n)
// {
//     go(n, 0, 1);
//     return;
// }

void go(int n, int a, int b)
{
    printf("%d ", a); 
    if (n == 1)
    {
        return;
    }
    go(n - 1, b, a + b);
}
