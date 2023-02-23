#include<stdio.h>

int  main()
{
    int a, b;
    float c, d;
    //taking value for the integers
    printf("Give the Integers You Want To Add\n");
    scanf("%d %d", &a, &b);
    //printing the sum of values
    printf("The sum of numbers are :%d'\n", a + b);
    
    //taking value for floating numbers
    printf("Give the Floating Number You Want To Add\n");
    scanf("%f %f", &c, &d);
    //printing the sum of values
    printf("The sum of floating numbers are :%f\n", c + d);
    
    return 0;
}