#include<stdio.h>
 int n;

int array(int *a){
 for(int i=1; i<n-1; i++){
        a[i]=0;
    }
}

int main()
{



    scanf("%d",&n);

    int ar[n];


    for(int i=0; i<n; i++){

        scanf("%d",&ar[i]);
    }

   array(ar);

    for(int i=0; i<n; i++){

        printf("%d ",ar[i]);
    }
}
