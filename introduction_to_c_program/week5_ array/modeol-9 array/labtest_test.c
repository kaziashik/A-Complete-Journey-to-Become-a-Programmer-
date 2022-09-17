#include<stdio.h>
int main()
{

 while(1){

       float i,v,r;
 int a;

    printf("\n\nOhm's Law Calculator\n\n");

printf("1. Calculate Voltage\n");
printf("2. Calculate Resistance\n");
printf("3. Calculate Current\n");
printf("4. Exit\n\n");

printf("Enter your choice (1-4): ");
scanf("%d",&a);




if(a==1){
        printf("1.Calculate Voltage (V=I*R)\n");

    printf("Please Enter the Current(I) Value:");
    scanf("%f",&i);
    printf("Please Enter the Resistance(R) Value: ");
    scanf("%f",&r);

     float voltage=i*r;
    printf("\nVoltage =%.2f v\n",voltage);
}

else if(a==2){
   printf("2. Calculate Resistance  (R=V/I)\n");

    printf("Please Enter the Current(I) Value:");
    scanf("%f",&i);
    printf("Please Enter the voltage(v) Value: ");
    scanf("%f",&v);

     float Resistance=v/i;
    printf("\nVoltage =%.2f ohm\n",Resistance);
}

else if(a==3){
    printf("3. Calculate Current (I=V/R)\n");

    printf("Please Enter the resistance(R) Value:");
    scanf("%f",&r);
    printf("Please Enter the voltage(v) Value: ");
    scanf("%f",&v);

     float Current=v/r ;
    printf("\nCurrent =%.2f A\n",Current );
}

else if(a==4){
  printf("\n4. Exit\n");
  break;
}

else {
    printf("\nPlease enter a valid selection\n\n");
}
 }
}

