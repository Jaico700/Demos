#include <stdio.h>
int main()
{
    int a,b;
    //2 4 8 16
    printf("Write the number of terms of GP you want: ");
    scanf("%d",&a);
    b = 2;
    for (int i=1; i<=a ; i++)
    {
        printf("%d ", b*(2^(i-1)));
    }
    return 0;
}