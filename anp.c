#include <stdio.h>
int main()
{
    int a;
    printf("how many terms do you want: ");
    scanf("%d",&a);
    for (int i=1; i<=2*a-1 ; i=i+2)
    {
        printf("%d ",i);
    }
    return 0;
}