#include <stdio.h>
int main()
{
    int n;
    printf("Which Fibonacci Number do you want: ");
    scanf("%d",&n);
    int a,b,c;
        a = 1;
        b = 1;
        c = 1;
        printf("The First %d fibonacci terms are ",n);
    if(n>=1) printf("%d ",a);
    for(int i=1;i<=n-1;i++)
    {
        printf("%d ",c);
        c = a + b;
        a = b;
        b = c;
        
    }
    return 0;
}