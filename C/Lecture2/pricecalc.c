#include <stdio.h>
int main()
{
    float b,s;
    printf("Cost Price: ");
    scanf("%f",&b);
    printf("\nSelling Price: ");
    scanf("%f",&s);
    if (b>s)
    {
        printf("There was a loss of: %f%", (b - s)/b*100 );
    }
    if (b==s)
    {
        printf("There was Neither a profit nor a loss");
    }
    else
    {
        printf("There was a profit of: %f%", (s - b)/b*100 );
    }
    return 0;
}