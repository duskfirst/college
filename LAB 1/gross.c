#include<stdio.h>

int  main()
{
    int emp_id;
    float gross, da_alw, house_r, basic_slry;
    //Entry of data 
    printf("Enter Employee ID\n");
    scanf("%d",&emp_id);
    printf("Enter The basic salary :");
    scanf("%f",&basic_slry);
    printf("Enter the Percent of Daily Allowance :");
    scanf("%f",&da_alw);  
    printf("Enter the Percent of House Rent Allowance :");
    scanf("%f",&house_r);

    //calculation of data
    gross = basic_slry + da_alw*basic_slry/100 + house_r*basic_slry/100;    
    //printing the sum
    printf("The Gross salary for Employee with ID %d are :%f'\n", emp_id, gross);
    return 0;
}