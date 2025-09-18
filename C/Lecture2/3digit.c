#include <stdio.h>
int main()
{
    int n;
    printf("What is your number: ");
    scanf("%d",&n);
    if (n>=100 && n<=999)
    {
        printf("Your Number is a three digit number");
    }
    else
    {
        printf("Your Number is not a three digit number");
    }
    return 0;
}