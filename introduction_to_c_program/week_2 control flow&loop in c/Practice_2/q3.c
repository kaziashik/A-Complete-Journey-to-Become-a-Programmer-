
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

   if(n<0 ){
    printf("negative nember");
   }
 else if(n%3==0 && n%7 ==0){
            printf("NO");

    }

   else if  (n%3==0 )
    {
    printf("yes");

   }
     else if  (n%7 ==0)
    {
    printf("yes");

   }
   else{
    printf("enter n umber multiple by 7 and 3");
   }



}
