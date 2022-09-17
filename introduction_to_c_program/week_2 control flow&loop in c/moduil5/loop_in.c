#include<stdio.h>
int main()

{ int height,width,n;
int sum=0;
    scanf("%d %d",&height,&width);


    //outer
    for(int i=0; i<width; i++){
        printf("*");
    }
    printf("\n");


    //inner
   for(int i=1; i<height-2; i++){
     printf("*");
     for(int j=0; j<width-2; j++){
        printf(" ");
     }
     printf("*");
     printf("\n");
   }


   //outer
  for(int i=0; i<width; i++){
        printf("*");
    }
    printf("\n");

    return 0;
}
