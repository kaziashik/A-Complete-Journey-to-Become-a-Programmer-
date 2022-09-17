
#include<stdio.h>
int main()

{


    int ar2[10],v[10],n,value,value2,comper;

    scanf("%d",&n);


    int j,i,ar[n];

    for( i=0; i<n; i++){

        scanf("%d",&ar[i]);


    }
int reverseind=0;
int rev[n];
       for( i=n-1; i>=0; i--){

            rev[reverseind]=ar[i];
            reverseind++;

    }

    printf("\n");
     for( i=0; i<n; i++){

            int diffe=rev[i]-ar[i];

     if(diffe<0){
        diffe=diffe*(-1);
     }


      printf("%d  ",diffe);

    }









}
