#include<stdio.h>
float main()
{
    float temp;
    printf("Enter temperature in celcius\n");
    scanf("%f",&temp);
    float t1=((temp*9)/5)+32;
    float t2=temp+273.15;
    printf("the temperature in fahrenheit is %f\n",t1);
    printf("the temperature in kelvin is %f\n",t2);

}
