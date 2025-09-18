#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Ram's age: ");
    scanf("%d",&a);
    printf("Enter Shyam's age: ");
    scanf("%d",&b);
    printf("Enter Ajay's age: ");
    scanf("%d",&c);

    if(a<b)
    {
        if(a<c)
        {
            printf("Ram is the Youngest");
        }
        else
        {
            printf("Ajay is the Youngest");
        }
    }
    if(b<a)
    {
        if(b<c)
        {
            printf("Shyam is the Youngest");
        }
        else
        {
            printf("Ajay is the Youngest");
        }
    }
    return 0;
}