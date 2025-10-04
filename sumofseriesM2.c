#include <stdio.h>
int main()
{
    //1-2+3-4
    int n;
    printf("\nSum of terms required: ");
    scanf("%d",&n);
    int sum = 0,term =0;
        if(n%2==0) sum = -n/2;
        else sum = (n+1)/2;
    printf("The sum of terms is %d",sum);
    return 0;
}