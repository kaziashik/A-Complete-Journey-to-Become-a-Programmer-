#include<stdio.h>

 float make_sum(float x, float y){
     float total=x+y;

     return total;
 }
int main()
{

    float a,b;

    scanf("%f",&a);
    scanf("%f",&b);

    float sum=make_sum(a,b);

    printf("%f",sum);
}
