#include <stdio.h>
int main()
{
    int n,r,sum = 0;
    printf("Write your number: ");
    scanf("%d",&n);
    int a = n;
    while(a!=0) 
    {
        r = a%10;
        a = a/10;
        sum = sum + r;
    }
    printf("Sum of digits is %d",sum);
    return 0;
}
//mistakes: phele sum = 0 define karke sum = sum + last digit karna tha vo nahi ho raha tha  