#include <stdio.h>
int main(void){
    // Here your code !

    int ar1[11]={3,2,2,5};
    int ar2[11],j;
    int count[sizeof(ar1)/sizeof(ar1[0])]={0};

    for(int i=0; i<sizeof(ar1)/sizeof(ar1[0]); i++){

            count[ar1[i]]++;

             if(count[i]==1)
                    {
                        printf("->%d\n\n",i);
                    }
            }



    }




