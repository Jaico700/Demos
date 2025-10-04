#include <stdio.h>
int main()
{
    int n;
    printf("Which number table do you want: ");
    scanf("%d",&n);
    for(int i=1 ; i<=10 ; i++)
    {
        printf("%d\n",n*i);
    }
    return 0;
}