#include<stdio.h>
int main()
{
    float a,b,diff,div,sum,pro;
    printf("Enter two number\n");
    scanf("%f %f",&a,&b);
    sum=a+b;
    pro=a*b;
    if(a>b)
    {
        diff=a-b;
        div=a/b;
    }
    else
    {
        diff=b-a;
        div=b/a;
    }
    printf("The sum is%f\n,Difference is%f\n,The product is%f\n,The division is%f\n ",sum,diff,pro,div);
return 0;
}
