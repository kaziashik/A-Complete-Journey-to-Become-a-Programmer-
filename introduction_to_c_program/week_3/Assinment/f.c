#include<stdio.h>
int main()

{
     int a,b,count=0,num;
    scanf("%d%d",&a,&b);

for(int i=1; i<=a; i++){

    if(i%2 !=0){
        for(int j=1; j<=b; j++){
            printf("#");
        }
    }




        if(i%2 ==0){

            if(i%4==0){
                printf("#");
            for(int j=1; j<b; j++){
                printf(".");
            }



            }
            else {

                  for(int j=1; j<b; j++){

                            printf(".");

            }
            printf("#");
            }

        }


       printf("\n");
      }








    return 0;
}

