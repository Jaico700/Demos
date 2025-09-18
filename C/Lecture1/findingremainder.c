#include <stdio.h>
int main()
{
    int a,b,r;
    printf("Write your Dividend: "); //what is being divided
    scanf("%d",&b);
    printf("Write your Divisor: "); //what you are dividing it into 
    scanf("%d",&a);
    r = b%a ;
    printf("Your Remainder when %d is divided by %d is %d",b,a,r);
    return 0;
}