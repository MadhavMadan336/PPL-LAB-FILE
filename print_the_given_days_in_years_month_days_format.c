#include<stdio.h>
int main()
{
    int a,m=0,y=0,d=0;
    printf("Enter the number of days");
    scanf("%d",&a);
    while(a>=365)
    {
        y++;
        a=a-365;
    }
     while(a>=30)
     {
        m++;
        a=a-30;
     }    
    d=a;  
    printf("%dyear,%dmonths,%dday",y,m,d);
}
