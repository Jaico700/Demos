#include <stdio.h>
int main()
{
    int n, r;
    printf("Write the number: ");
    scanf("%d",&n);
    int a = n;
    int reverse = 0;
    while(a!=0)
    {
        r = a%10;
        a = a/10;
        reverse = reverse*10 + r;
    }
    printf("Reverse of the number is %d",reverse);

    return 0;
}
//reverse jaise term phele initilise karna hota hai yaad rakhiyo 