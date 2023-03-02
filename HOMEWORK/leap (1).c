/*
checks if it a leap year or not
*/
#include <stdio.h>

int main()
{
    int year;
    printf("Enter The Year\n");
    scanf("%d", &year);
    
    if (year % 4 == 0)
    {
        if (year % 100 != 0)
        {
            printf("Leap Year\n");
        }
        else if (year % 400 == 0)
        {
            printf("Leap Year\n");
        }
        else
        {
            printf("Not Leap Year\n");
        }
    }
    else
        {
            printf("not Leap Year\n");
        }
}