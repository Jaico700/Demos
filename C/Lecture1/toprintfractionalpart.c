#include <stdio.h>
int main()
{
     float a;
     printf("Write your number: ");
     scanf("%f",&a);
     int b;
     b=a;
     printf("Integral part of your number is: %d\n",b);
     printf("Fractional part of your number is: %f",a-b);
    return 0;
}