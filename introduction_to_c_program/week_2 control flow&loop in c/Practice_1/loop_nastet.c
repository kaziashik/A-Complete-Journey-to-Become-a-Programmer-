#include<stdio.h>
int main()
{
   int i;
   scanf("%d",&i);
////c
   for( int t=1; t<=i; t++){
        int n,m;
      scanf("%d %d",&n,&m);
      printf("Case %d: %d\n",t,n+m);
   }
    return 0;
}
