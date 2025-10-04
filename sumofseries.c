#include <stdio.h>
int main()
{
    //1-2+3-4
    int n;
    printf("\nSum of terms required: ");
    scanf("%d",&n);
    int a = 1,sum = 0,term =0;
    while(a!=n+1)
    {
        if(a%2!=0)
        {
            sum = sum + a;
        }
        else 
        {
            sum = sum - a;
        }
        a++;
    }
    printf("The sum of terms is %d",sum);
    return 0;
}