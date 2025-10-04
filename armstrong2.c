#include <stdio.h>
#include <math.h>
int main()
{
    int a=1;
    while(a<=500)
    {
        int b,c,d;
        b = a%10;
        c = (a/10)%10;
        d = (a/100)%10;
        if(a == pow(b,3) + pow(c,3) + pow(d,3))
        {
            printf("%d ",a);
        }
        a++;
    }
    return 0;
}