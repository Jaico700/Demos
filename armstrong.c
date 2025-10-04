#include <stdio.h>
int main()
{
    int a=1;
    while(a<=500)
    {
        int b,c,d;
        b = a%10;
        c = (a/10)%10;
        d = (a/100)%10;
        if(a == b*b*b + c*c*c + d*d*d)
        {
            printf("%d ",a);
        }
        a++;
    }
    return 0;
}