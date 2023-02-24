#include <stdio.h>

int lcm(int a, int b)
{
    int high, low, i = 1;
    
    a > b ? ({low = b; high = a;}):({low = a; high = b;}); 
    
    do
    {
        if ((high * i) % low == 0)
        {
            return high * i;
        }
    }
    while(i++);
}

int hcf(int a, int b) {
    return a == 0 ? b : hcf(b % a, a);
}

int main()
{
    int a, b;

    printf("Enter the Numbers to be found\n");
    scanf("%d %d", &a, &b);
    
    printf("HCF of the Number Is %d\n", hcf(a, b));
    printf("LCM of the Number Is %d\n", lcm(a, b));
}