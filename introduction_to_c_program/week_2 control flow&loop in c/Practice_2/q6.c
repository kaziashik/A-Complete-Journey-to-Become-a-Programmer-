#include<stdio.h>
int main()
{
    int temp;
    scanf("%d",&temp);
    if(temp<0){
        printf("Freezing water");
    }
    else if(temp>0 &&temp<10){
        printf("very cold wather");
    }
    else if(temp>10 &&temp<20){
        printf(" cold wather");
    }
     else if(temp>20 &&temp<30){
        printf(" Normal in Temp");
    }
     else if(temp>30 &&temp<40){
        printf(" Its Hot");
    }
    else {
        printf(" Its Very Hot");
    }
}

