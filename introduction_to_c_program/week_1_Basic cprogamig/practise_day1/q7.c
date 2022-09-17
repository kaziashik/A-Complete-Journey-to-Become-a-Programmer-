#include<stdio.h>
int main()
{
    double height;
    double height_in_feet;
    double height_in_inches;
printf("Enter  height is inches: ");
scanf("%d",&height);

height_in_feet=height/12;
height_in_inches=height*0.083333;



printf("Your height is %d feet % inches" , height_in_feet,height_in_inches);

return 0;

}
