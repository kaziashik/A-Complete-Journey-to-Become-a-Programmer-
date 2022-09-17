#include<stdio.h>
int main()
{
   float weight_item1,weight_item2, no_of_item1, no_of_item2,average;
    printf("weight_item1:");
    scanf("%f",&weight_item1);
    printf("no_of_item1:");
    scanf("%f",&no_of_item1);

      printf("weight_item2:");
    scanf("%f",&weight_item2);
     printf("no_of_item2:");
    scanf("%f",&no_of_item2);
     average=(weight_item1*no_of_item1)+(weight_item2*no_of_item2)/(no_of_item1+no_of_item2);

     printf("average=%.4f",average);

    return 0;


}
