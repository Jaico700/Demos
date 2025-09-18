#include <stdio.h>
int main()
{
    int a,b,c;  
    printf("Ram's Age: ");
    scanf("%d",&a);
    printf("Shyam's Age: ");
    scanf("%d",&b);
    printf("Ghamshyam's Age: ");
    scanf("%d",&c);
    if (a<b && a<c)
    {
        printf("Ram is the youngest");
    }
    if (b<a && b<c)
    {
        printf("Shyam is the youngest");
    }
    if (c<b && a>c)
    {
        printf("Ghamshyam is the youngest");
    }
    return 0;
}