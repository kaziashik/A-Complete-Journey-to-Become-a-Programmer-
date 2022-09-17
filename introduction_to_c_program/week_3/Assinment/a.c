#include<stdio.h>
int main()

{
    int n, k, a,i,j=1;
while(1){
    scanf("%d%d%d",&n,&k,&a);

    for( i=a; j<k; j++){
              //   printf("%d ",i);


            if(i==n){

                i=1;

            }else{
                i++;
            }



    }
     printf("%d \n",i);
}



    return 0;
}
