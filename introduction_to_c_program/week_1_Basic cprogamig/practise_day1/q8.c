#include<stdio.h>
 int main()
 {

   double height;
   double width;
   double Area;
   double Perimeter;

     printf("Enter height of rectangle: ");
     scanf("%lf",&height);
     printf("\nEnter width of rectangle: ");
     scanf("%lf",&width);


     Perimeter= 2*(height+width);
     Area=height*width;
     printf("Area is %.0lf\n",Area);
     printf("perimeter is %.0lf", Perimeter);



     return 0;

 }
