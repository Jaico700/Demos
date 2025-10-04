#include <stdio.h>
int main()
{
    int n;
    printf("Input Number: ");
    scanf("%d",&n);
    int product=1,a=n;
    while(a!=0)
    {
        product = product*a;
        a--;
    }
    printf("%d",product);
    return 0;
}