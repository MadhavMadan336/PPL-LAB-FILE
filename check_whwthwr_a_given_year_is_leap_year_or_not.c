#include<stdio.h>
int main()
{
    int year;
    printf("Enter year");
    scanf("%d",&year);
    if(year%400==0||year%4==0)
    {
        printf("%d is a leap year",year);
    }
    else if(year%100==0)
    {
        printf("%d is a not leap year",year);
    }
    else
    {
        printf("%d is a not leap year",year);
    }
    return 0;
}
