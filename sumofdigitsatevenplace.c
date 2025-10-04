#include <stdio.h>
int main()
{
    int n,a,sum = 0, r;
    printf("Write The Number: ");
    scanf("%d",&n);
    a = n;
    for(int i = 1; a!=0; i++)
    {
        r = a%10;
        a = a/10;
        if(i%2==0)
        {
        sum = sum + r; 
        }
    }
    printf("Sum of even digits is %d", sum);
    return 0;
}