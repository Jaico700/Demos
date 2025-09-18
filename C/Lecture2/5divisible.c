#include <stdio.h>
int main()
{
    int n;
    printf("Write your number: ");
    scanf("%d",&n);
    if(n%5==0)
    {
        printf("Your number is divisible by five");
    }
    else
    {
        printf("Your number is not divisible by five");
    }
    return 0;
}
