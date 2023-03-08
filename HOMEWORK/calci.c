#include <stdio.h>

int sum(int a, int b);
int diff(int a, int b);
int mul(int a, int b);
float div(int a, int b);
int mod(int a, int b);

int main()
{
    int n, a, b, oper;
    printf("Enter The values for number you want to calculate\n");
    scanf("%d%d", &a, &b);

    printf("Choose one Operation from options below\n");
    printf("1.+\n2.-\n3.*\n4./\n5.%%\n");
    scanf("%d", &n);
    switch(n)
    {
        case 1:
            {
                printf("%d + %d = %d", a, b, sum(a, b));
                break;
            }
        case 2:
            {
                printf("%d - %d = %d", a, b, diff(a, b));
                break;
            }
        case 3:
            {
                printf("%d * %d = %d", a, b, mul(a, b));
                break;
            }
        case 4:
            {
                if (b == 0)
                {
                    printf("cannot Divide by 0\n");
                    return -1;
                }
                printf("%d / %d = %f", a, b, div(a, b));
                break;
            }
        case 5:
            {
                if (b == 0)
                {
                    printf("Cannot Divide by 0\n");
                    return -1;
                }
                printf("%d %% %d = %d", a, b, mod(a, b));
                break;
            }
        default:
            {
                printf("Enter Valid Option\n");
                break;
            }
            
    }
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}

int diff(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

float div(int a, int b)
{
    return a * 1.0 / b;
}

int mod(int a, int b)
{
    return a % b;
}