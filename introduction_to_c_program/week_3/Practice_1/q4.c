
#include<stdio.h>

int main(){
    int a,b,c,s;
    scanf("%d %d %d",&a,&b,&c);

   for(int i=1;i<=c;i++){

    s= s+i*a;
   }
 if(s<=0){
    printf("0");
 }
 else
   printf("%d\n",s-b);

return 0;

}

