#include <stdio.h>
int main()
{
    int n;
    printf("Write your positive integral input ");
    scanf("%d",n);
    if ( n%5==0 && n%3==0 )
    {
        printf("Your Number is divisible by 5 and 3");
    }
    else
    {
        printf("Your Number is not divisible by 5 and 3");
    }
    return 0;
}