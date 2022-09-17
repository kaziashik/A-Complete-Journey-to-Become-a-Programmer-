#include<stdio.h>

int array_delet( int *a, int n, int pos){

           for(int i=pos+1; i<n; i++){
            a[i-1]=a[i];
           }

           }
int main(){

int ar[6]={3,5,7,4,6,7};

int pos;
scanf("%d",&pos);
array_delet(ar,6,pos);
for(int i=0; i<5; i++){
    printf("%d ",ar[i]);
}

return 0;
}
