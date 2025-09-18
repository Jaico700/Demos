#include <stdio.h>
int main()
{
    int x,y;
    printf("write Your coordinate");
    scanf("%d%d",&x,&y);

    if(x==0 && y==0)
    {
        printf("Your coordinate is the origin");
    }
    else if(x==0)
    {
        printf("Your coordinate lies on the y axis");
    }
    else if(y==0)
    {
        printf("Your coordinate lies on the x axis");
    }
    else
    {
        printf("Your coordinate lies on neither of the axices");
    }
    return 0;
}