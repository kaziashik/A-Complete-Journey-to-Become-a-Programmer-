
#include <stdio.h>
int main(void){
    // Here your code !

    int ar1[11]={5,3,3,3,0,0,7,7,0,9};
    int ar2[11],j;
    int count[12]={0};

    for(int i=0; i<10; i++){

            count[ar1[i]]++;

             if(count[i]==1)
                    {
                        printf("->%d\n\n",i);
                    }
            }



    }




