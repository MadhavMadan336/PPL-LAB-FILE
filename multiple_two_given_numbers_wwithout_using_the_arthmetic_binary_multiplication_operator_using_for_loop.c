#include<stdio.h>
#include<math.h>
int main()
{
    int d,e,f,sum=0;
    printf("Enter two number ");
    scanf("%d %d",&d,&e);
    for(f=1;f<=d;f++)
    {
        sum+=e;
    }
    printf("%d",sum);
   
    return 0;
}
