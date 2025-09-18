#include <stdio.h>
int main()
{
    int n;
    printf("write your number:");
    scanf("%d",&n);
    if (n%3==0 || n%5==0)
    {
       if (n%15==0)
       {
        printf("%d is divisible by 3 or 5 and also by 15",n); 
       }
       else
       {
        printf("%d is divisible by 3 or 5 but not by 15",n); 
       }
    }
    else
    {
        printf("%d is not divisible by 3 or 5",n); 
    }
    
    return 0;

}