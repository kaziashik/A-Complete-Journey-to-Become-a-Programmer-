#include<stdio.h>

int main()
{
   int num1,num2;
   printf("enter 2 number for integer");
   scanf("%d %d",&num1,&num2);
   int jogfol = num1+num2;
   printf("%d - %d=%d\n",num1,num2,jogfol);

   double num3,num4;
   printf("enter 2 number for double");
   scanf("%lf %lf",&num3,&num4);
   double jogfol3 = num3+num4;
   printf("%lf - %lf=%lf\n",num3,num4,jogfol3);

    return 0;

}
