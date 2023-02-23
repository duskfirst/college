/*
F = (temp_in_Celcius * 9/5) +32
*/
#include<stdio.h>

int main()
{
    float c;
    float ft;
    printf("Enter The Temperature in Celcius : ");
    scanf("%f",&c);
    ft = (c * 9/5) +32;
    printf("Temperature In Fahrenheit : %f",ft);
}