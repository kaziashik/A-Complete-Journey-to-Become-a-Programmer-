#include<stdio.h>
int main()

{
  int celsius;
  float fahrenheit;

  printf("Enter  temperature in Celsius= ");
  scanf("%d",&celsius);
  fahrenheit=(celsius*1.8)+32;

  printf("Temperature in Fahrenheit=%.1f",fahrenheit);


    return 0;
}
