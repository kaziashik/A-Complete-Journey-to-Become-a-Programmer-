

#include<stdio.h>


int main()
{


   int n;
int a,grade=0,rem;
scanf("%d",&n);
   for( int i=1; i<=n; i++){
    scanf("%d",&grade);

    if(grade>=38){
         rem=grade%5;
        if(rem>=3){
           grade +=5 - rem;
        }

    }
   printf("%d\n",grade);
   }




}
