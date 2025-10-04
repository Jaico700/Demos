#include <stdio.h>
int main()
{
    int n;
    printf("How many terms do you want: ");
    scanf("%d",&n);
    float a = 100;
    for(int i = 1 ; i<=n ; i++ )
    {
        printf("%f ",a);
        a = a/2;
    }
    return 0;
}