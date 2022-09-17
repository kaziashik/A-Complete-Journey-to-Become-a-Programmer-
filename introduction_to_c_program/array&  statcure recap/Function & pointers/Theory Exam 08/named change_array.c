#include<stdio.h>
int ar2[ ];
int change_array(int*a, int n){

    int j=0;
    for(int i=n-1; i>=0; i--) {

    ar2[j]=a[i];
j++;
   }


}

int main()
{

   int n, j=0;
   scanf("%d",&n);
   int ar[n];

   for(int i=0; i<n; i++) {

    scanf("%d",&ar[i]);
   }

change_array(ar,n);


   for(int i=0; i<n; i++) {

    printf("%d ",ar2[i]);
   }
}
