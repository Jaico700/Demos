#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Length of 1st side: ");
    scanf("%d",&a);
    printf("Length of 2nd side: ");
    scanf("%d",&b);
    printf("Length of 3rd side: ");
    scanf("%d",&c);
    if (a+b>c && b+c>a && c+a>b)
    {
        printf("Yes,you can form a triangle with the given lengts of sides");
    }
    else
    {
        printf("No,you cannot form a triangle with the given lengts of sides"); 
    }
    return 0;
}