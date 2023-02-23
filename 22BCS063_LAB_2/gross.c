/*
1.Basic Salary <= 10000 : HRA = 20%, DA = 80%
2.Basic Salary is between 10001 to 20000 : HRA = 25%, DA = 90%
3.Basic Salary >= 20001 : HRA = 30%, DA = 95%
The formula to compute the gross salary is:
gross salary = basic salary + DA + HRA
*/
#include <stdio.h>

int main()
{
    int bs;
    int da;
    int hra;
    float gs;
    printf("Enter Basic Salary :\n");
    scanf("%d",&bs);
 
    if (bs <= 10000)
    {
        hra = 20;
        da = 80;
    }
    else if (bs > 10000 || bs <= 20000)
    {
        hra = 25;
        da = 90;
    }
    else
    {
        hra = 30;
        da = 95;
    }
    
    gs = bs + bs * hra / 100 + da * bs / 100;
    printf("The Gross salary is: %f\n", gs);

    return 0;

}