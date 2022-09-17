#include<stdio.h>
int main()

{
    int a,d,d2,d3;
    scanf("%d",&a);
  int as=a;


    d=a%10;
    a/=10;
    d2=a%10;
     a/=10;
    d3=a%10;
     a/=10;

     int c1=d+d2+d3;
      int c2=10*d+100*d2+d3;
     int c3=100*d+d2+10*d3;

     int sum=as+c2+c3;
     printf("%d\n %d\n %d\n",as,c2,c3);

     printf("%d\n",sum);




    return 0;
}
