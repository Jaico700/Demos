#include <stdio.h>
int main()
{
    float r,pi,Area;
    printf("Radius: ");
    scanf("%f",&r);
    pi = 3.14;
    Area = pi*r*r;
    printf("The area of circle is: %f",Area);
    return 0;
}