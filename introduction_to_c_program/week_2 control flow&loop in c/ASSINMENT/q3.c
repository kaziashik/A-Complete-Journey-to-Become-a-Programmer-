#include<stdio.h>
int main()
{

   int n ,temp,count=0;
   scanf("%d",&n);

   for( int i=1; i<=n; i++){
    scanf("%d",&temp);
    if(temp<0){
        count++;
    }

   }
   printf("%d",count);
}
