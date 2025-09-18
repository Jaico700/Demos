#include <stdio.h>
int main()
{
    int y;
    printf("What year is it: ");
    scanf("%d",&y);
    if(y%4==0)
    {
        printf("This year is a leap year");
    }
    else
    {
        printf("This year is not a leap year");
    }
    return 0;
}