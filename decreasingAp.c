#include <stdio.h>
int main()
{
    int n;
    printf("How many terms do you want");
    scanf("%d",&n);
    //100 97 94
    int a = 100;
    for(int i=1; i<=n; i++)
    {
        if(a>=0)
        {
            printf("%d ", a);
        }
        else
        {
            break;
        }
        a = a-3;
    }
    return 0;
}
