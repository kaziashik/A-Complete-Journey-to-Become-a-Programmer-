#include<stdio.h>
int main()
{
   double num1;

   printf("Enter a number: ");
   scanf("%lf",&num1);
   int a=num1;
   double real=num1-a;

   printf("Integer part:%d\n",a);
   printf("Real part: %.3lf",real);

    return 0;

}
