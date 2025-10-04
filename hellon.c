#include <stdio.h>
int main()
{
    int n;
    printf("Enter how many time you want the program to print hello world: ");
    scanf("%d",&n);
    for(int i=1; i<=n ; i++ )
    {
        printf("Hello World\n");
    }
    return 0;
}