#include <stdio.h>
int main()
{
    int n;
    printf("Input Number: ");
    scanf("%d",&n);
    int product=1;
    printf("Factorial of first %d natural numbers are: ",n);
    for(int i=1; i<=n; i++)
    {
        for(int j=1;j<=i;j++)
        {
            product = product*j;
        }
        printf("%d ",product);
        product = 1;
    }
    return 0;
}