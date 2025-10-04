#include <stdio.h>
int main()
{
    int n;
    printf("Write your number: ");
    scanf("%d",&n);
    int count = 0;
    while(n!=0)
    {
        n = n/10;
        count++;
    }
    printf("The number of Digits is %d",count);
    return 0;
}
// count ko phele zero karna padhega varna garbage value aa jayagi..........