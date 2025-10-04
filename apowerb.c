#include <stdio.h>
int main()
{
    int a,b,c = 1;
    //a^b
    printf("Base: ");
    scanf("%d",&a);
    printf("Power: ");
    scanf("%d",&b);
    for(int i=1; i<=b; i++)
    {
        c = a*c;
    }
    printf("%d to the power %d is %d",a,b,c);
    return 0;
}