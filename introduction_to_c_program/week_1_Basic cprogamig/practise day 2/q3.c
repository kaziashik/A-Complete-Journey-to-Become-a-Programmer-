#include<stdio.h>

int main()

{

    int first, second, sum, difference, product,Quotionent,modulus;

    printf("First number: ");
    scanf("%d",&first);
    printf("Second number");
    scanf("%d",&second);

    sum=first+second;
    difference=first-second;
    product=first*second;
    Quotionent=first/second;
    modulus=first%second;
    printf(" Sum=%d\n Diffrence=%d\n Product=%d\n Quotiont=%d\n Modulus=%d",sum,difference,product,Quotionent,modulus );



    return 0;
}
