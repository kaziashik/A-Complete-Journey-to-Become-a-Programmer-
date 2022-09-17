#include<stdio.h>
int main()
{
   int i;
   scanf("%d",&i);
////c
   for( int t=1; t<=i; t++){
        int n,m,p;
      scanf("%d %d %d",&n,&m,&p);

      int  advert_profit=m-p;

      if (advert_profit>n){
        printf("advertise\n");
      }
      else if(advert_profit==n)
        {
        printf("does not matter\n");
      }
      else{
       printf("do not advertise\n");
      }

   }
    return 0;
}


