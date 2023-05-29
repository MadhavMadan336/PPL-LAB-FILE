#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three number\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("%d The greatest number is ",a);
    }
    if(b>a&&b>c)
    {
        printf("%d The greatest number is  ",b);
    }
    if(c>a&&c>b)
    {
        printf("%d The greatest number is ",c);
    }
return 0;
}
