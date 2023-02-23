#include <stdio.h>

int main()
{
    int x, y, z;
    printf("Enter wrong Marks For Ram : ");
    scanf("%d",&x);
    printf("Enter wrong Marks For Sam : ");
    scanf("%d",&y);
    z = x;
    x = y;
    y = z;
    printf("The Correct Marks For Ram : %d\n",x);
    printf("The Correct Marks For Sam : %d\n",y);
    return 0;
}