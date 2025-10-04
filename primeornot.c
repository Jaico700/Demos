#include <stdio.h>
int main()
{
    int n;
    printf("Input: ");
    scanf("%d",&n);
    int a=0;
    for (int i=2 ; i<=n-1 ; i++ )
    {
        if(n%i==0)
        {
            a=1;
            break;
        }
    }
    if(n==1)
    {
        printf("The number is neither prime nor composite\n");
    }
    else if(a==0)
    {
        printf("The number is Prime\n");
    }
    else 
    {
        printf("The number is a composite\n");
    }
    return 0;
}