

/**
write a program to find the perimeter and area of a  circle.
the program will ask to user for a radius. and then print the perimeter and area

sample interaction:
enter radius:
perimeter =6.28

area==3.14


perimeter = 2* pi * r
area= pi * r^2



**/

#include<stdio.h>

int main()
{
    double radious;
   double  Perimeter;
    double Area;
    const double PI=3.14;

    printf("enter circulr radious: \n");
    scanf("%lf",&radious);

    Perimeter=2*PI *radious;

    Area=PI*(radious*radious);

    printf("circle area: %.2lf \n",Area );
    printf("circle Perimeter: %.2lf",Perimeter);



    return 0;
}
