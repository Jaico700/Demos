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
    for(int i=1;i<=n-2;i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    if(n!= 1 && n!=2 && n!=3) printf("The %dth fibonacci term is %d",n,c);
    if(n==1) printf("The %dst fibonacci term is %d",n,c);
    if(n==2) printf("The %dnd fibonacci term is %d",n,c);
    if(n==3) printf("The %drd fibonacci term is %d",n,c);
    return 0;
}