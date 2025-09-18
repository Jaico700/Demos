#include <stdio.h>
int main()
{
    int a;
    printf("What is for your number: ");
    scanf("%d",&a);
    if (a<0)
    {
        a = a*(-1);
        printf("Absolute value of your number is %d", a);
    }
    
    printf("Absolute value of your number is %d", a);
    
    

    return 0;
}