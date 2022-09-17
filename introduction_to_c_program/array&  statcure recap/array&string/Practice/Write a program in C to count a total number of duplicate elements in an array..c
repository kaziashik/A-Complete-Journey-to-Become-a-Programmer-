
#include <stdio.h>
int main(void){
    // Here your code !

    int ar1[11]={0,3,3,3,0,0,7,7,0,9};
    int ar2[11],j;
    int count[12]={0};

    for(int i=0; i<10; i++){

            count[ar1[i]]++;
            }

            for(int i=0; i<10; i++){
                   printf("\n%d ->%d  ",i,count[i]);
            }

    }




