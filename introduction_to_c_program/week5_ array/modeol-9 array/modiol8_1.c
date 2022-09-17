#include<stdio.h>
int main()
{
   const int n = 10;
   int i, values[n];

   for ( i=0; i<n; i++){
    values[i]=i+1;
   }

   values[4] *=5;
for(int i=0; i<10; i++){

  printf("values[%d] = %d\n",i, values[i]);
}



    return 0;
}
