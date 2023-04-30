#include <stdio.h>
#include <Windows.h>
#include "stacks.h"
#include <time.h>

stack maint, target, buffer;

int n, d;
clock_t start_time, end_time;
void displayto();

void move(stack *mant, stack *targt, stack *buffr, int disk)
{
    int a = 3;
    if(disk <= 1)
    {
        push(targt, pop(mant));
        //displayto(); 
        // end_time = clock();
        // printf("TIME = %lf", (double)(end_time - start_time) / CLOCKS_PER_SEC);
        // printf("\033[u");
        // //Sleep(d);
        return;
    }
    //Sleep(20);
    move(mant, buffr, targt, disk - 1);
    push(targt, pop(mant));
    move(buffr, targt, mant, disk - 1);
    return;
}

int main()
{
    int num;
    maint.top = -1;
    target.top = -1;
    buffer.top = -1;

    printf("Enter the number of elements :\n");
    scanf("%d", &n);
    printf("Enter the delay :\n");
    scanf("%d", &d);
    printf("\n");
    start_time = clock();
    maint.max = n;
    target.max = n;
    buffer.max = n;
    for(int i = n; i > 0; i--)
    {
        push(&maint, i);
    }
    printf("\033[s");
    move(&maint, &target, &buffer, n);
    //displayto();
    end_time = clock(); 
    printf("TIME = %lf", (double)(end_time - start_time) / (CLOCKS_PER_SEC) );
}


void displayto()
{
      for(int i = n; i >= 0; i--)
      {

        if(maint.top < i)
        {
            printf("\t||\t~\t||\t");
        }
        else
        {
            printf("\t||\t%d \t||\t", maint.arr[i]);
        }
        if(target.top < i)
        {
            printf("\t||\t~\t||\t");
        }
        else
        {
            printf("\t||\t%d \t||\t", target.arr[i]);
        }
        if(buffer.top < i)
        {
            printf("\t||\t~\t||\t");
        }
        else
        {
            printf("\t||\t%d \t||\t", buffer.arr[i]);
        }
        printf("\n");
      }
      for(int i = 0 ; i < 3; i++)
      {
        printf("\t");
         for(int i = 0; i < 18; i++)
         {
            printf("-");
         }
         printf("\t");
      }
      printf("\n\n");
    
    return;
}
