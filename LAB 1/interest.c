#include<stdio.h>
#include<math.h>
int  main()
{
    int t;
    float prip, r ,ci, si,a; 
    
    //Entry for the data
    printf("Enter Principal amount :");
    scanf("%f",&prip);
    printf("Enter The Rate Of Interest :");
    scanf("%f",&r);
    printf("Enter Time Period :");
    scanf("%d",&t);

    //Simple interest
    si = prip*r*t/100;
    printf("The Simple Interest For The Amount is :%f \n",si);
    printf("The Total Amount is :%f \n",si + prip);

    //compound interest
    a = (1+r/100);
    //calling power function from math.h
    ci=prip*pow(a,t);
    //printing the values
    printf("The compound Interest For The Amount is :%f \n",ci - prip);
    printf("The Total Amount is :%f \n",ci);
    return 0;
}