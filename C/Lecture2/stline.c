#include <stdio.h>
int main()
{
    int x1,x2,x3,y1,y2,y3;
    printf("Write your first coordinate: ");
    scanf("%d %d",&x1,&y1);
    printf("Write your second coordinate: ");
    scanf("%d %d",&x2,&y2);
    printf("Write your third coordinate: ");
    scanf("%d %d",&x3,&y3);

    if (y3 == (y2-y1)/(x2-x1)*x3)
    {
        printf("They lie on the same line");
    }
    else
    {
        printf("They don't lie on the same line");
    }
    return 0;
}