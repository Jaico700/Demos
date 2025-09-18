#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("Your 1st number: ");
    scanf("%d",&a);
    printf("Your 2nd number: ");
    scanf("%d",&b);
    printf("Your 3rd number: ");
    scanf("%d",&c);
    printf("Your 4th number: ");
    scanf("%d",&d);

    if (a>b && a>c && a>d)
    {
        printf("%d is the biggest Number",a);
    }
    if (b>a && b>c && b>d)
    {
        printf("%d is the biggest Number",b);
    }
    if (c>b && c>a && c>d)
    {
        printf("%d is the biggest Number",c);
    }
    if (d>b && d>c && a<d)
    {
        printf("%d is the biggest Number",d);
    }
    return 0;
}