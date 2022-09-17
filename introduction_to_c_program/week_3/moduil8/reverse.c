#include<stdio.h>
int  main()
{
   int x, sum=0, reversed=0;
   scanf("%d", &x);

   while(x>0){
    int digit = x%10;
    x/=10;
//    sum+=digit;
//    printf("digit = %d, x = %d\n",digit,x);

reversed= reversed* 10 +digit;
   }
//   printf("Digit sum=%d", sum);
 printf("reversed of =%d",reversed);


    return 0;
}
