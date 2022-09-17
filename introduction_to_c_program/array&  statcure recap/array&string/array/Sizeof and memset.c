
#include<stdio.h>
int main()



{


    int n;
    scanf("%d",&n);
    int ar[n];
    //printf("%d", size(ar)/sizeof(ar[0]));

    //printf("%d", sizeof(ar)/4);  //inte thatswhy devidet by 4


    //printf("%d", sizeof(ar)/sizeof(ar[0]));

      /*memset(ar,0,sizeof(ar));

    for(int i=0; i<n;i++){
        printf("%d", ar[i]);
    }
    */


    //another way to set valo on array

    for(int i=0; i<n; i++){
        ar[i]=-1;
    }

    for(int i=0; i<n; i++){
        printf("%d", ar[i]);
    }

    return 0;

}
