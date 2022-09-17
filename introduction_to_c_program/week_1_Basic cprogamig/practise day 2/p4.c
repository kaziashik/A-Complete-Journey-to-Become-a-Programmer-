#include<stdio.h>
int main()

{
    int Principle,time;
    double simple_interest,rate,principal_plus_interest;

    printf("Enter priciple:");
    scanf("%d",&Principle);

    printf("Enter time: ");
    scanf("%d",&time);

    printf("Enter  rate: ");
    scanf("%lf",&rate);

    simple_interest=(Principle*time*rate)/100;

    principal_plus_interest=Principle+simple_interest;
    printf("simple interest: %.1lf\n",simple_interest);
    printf("Principle plus: %.1lf",principal_plus_interest);



    return 0;
}
