#include<stdio.h>

int main()
{
    int fahrenheit;
    float  celsius;
    printf("Temperature in fahrenheit= ");
    scanf("%d",&fahrenheit);
    celsius=(fahrenheit-32)*0.55555;
    printf("Temperature in celsius: %.2f C",celsius);


    return 0;
}
