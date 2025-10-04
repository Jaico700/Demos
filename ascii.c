#include <stdio.h>
int main()
{
    int a=1;
    char b;
    while(a<=300)
    {
        b = a;
        printf("%d = %c\n",a,b);
        a++;
    }
    return 0;
}