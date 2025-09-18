#include <stdio.h>
int main()
{
    int m;
    printf("Total Marks of the student: ");
    scanf("%d",&m);
    if(m>90)
    {printf("Excillent");}
    else if(m>80)
    {printf("Very Good");}
    else if(m>70)
    {printf("Good");}
    else if(m>60)
    {printf("Can do better");}
    else if(m>50)
    {printf("Average");}
    else if(m>40)
    {printf("Below Average");}
    else
    {printf("Fail");}

    return 0;
}