
#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);



    if(a==b && a==c &&b==c){

    printf("No");
   }

   else if(a==b || a==c || b==c){
    printf("Yes");
   }


   else {
     printf("No");
   }




}

