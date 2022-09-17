#include<stdio.h>
int main(){


short ar[6]={2,1,0,-5,10,5};
int max=ar[0], min=ar[0];

for(int i=0; i<6; i++){
int val=ar[i];


    if(val>max){
        max=val;


    }



    if(val<min){
        min=val;

    }



}

printf("%d  ",min);
 printf("%d  ",max);








}
