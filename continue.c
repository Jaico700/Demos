#include <stdio.h>
int main()
{
    int n;
    printf("From what number do you want to print the odd integers: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            continue;
        }
        printf("%d ",i);
    }
    return 0;
}