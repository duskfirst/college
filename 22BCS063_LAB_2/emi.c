#include <stdio.h>
#include <math.h>

int main()
{
    float ln, a, pd, r, semi, cemi;
    int t;
    pd = 85000;
    ln = 1550000 - pd;
    t = 60;
    r = 16;
    semi = (ln + (ln * 16 * 60) / (100 * 12) ) / t;
    //compound interest
    a = (1+(r/12)/100);
    //calling power function from math.h
    cemi=ln*pow(a,t);
    //printing the values
    cemi = cemi / t;
    printf("The monthly emi in simple interest is : %f\n", semi);
    printf("The monthly emi in compound interest is : %f \n", cemi); 

}