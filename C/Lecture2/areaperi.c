#include <stdio.h>
int main()
{
    int l,b;
    printf("Length: ");
    scanf("%d",&l);
    printf("Breadth: ");
    scanf("%d",&b);
    if (l*b > (2*(l+b)))
    {
        printf("Area is bigger than the perimeter");
    }
    else if (l*b < (2*(l+b)))
    {
        printf("Area is smaller than the perimeter");
    }
    else
    {
        printf("Area is equal to perimeter");
    }
    return 0;
}