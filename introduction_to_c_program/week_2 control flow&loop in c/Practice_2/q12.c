#include<stdio.h>
#include<math.h>
int main()
{
   double a, b,c,x;
    scanf("%d %d %d",&a,&b);

    x=(-b/(2*a)+sqrt(((b*b)-4*a*c)))/2*a;
    printf("%d",x);
}

