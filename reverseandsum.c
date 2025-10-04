#include <stdio.h>
int main()
{
    int n;
    printf("Write Yourn number: ");
    scanf("%d",&n);
    int a=n,digit=0,sum=0,reverse=0;
    while(a!=0)
    {
        digit = a%10;
        sum = sum + digit;
        reverse = reverse*10 + digit;
        a = a/10;
    }

    printf("The Reverse of the number %d is %d",n,reverse);
    printf("\nThe sum of the number %d is %d",n,sum);
}