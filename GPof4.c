#include <stdio.h>
int main()
{
    int n;
    printf("Write the number of terms of Gp 3, 12, 48,.... you want: ");
    scanf("%d",&n);
    int a = 3;
    for(int i=1; i<=n ; i++)
    {
        printf("%d, ",a );
        a = a*4;
    }
    return 0;

}