#include<stdio.h>


void sort(int *a, int n){
 for (int pos=0; pos<n-1; pos++){

    for(int check=pos+1; check<n; check++){
        if(a[check]<a[pos]){
            int temp=a[check];
            a[check]=a[pos];
            a[pos]=temp;
        }
    }
 }
}



int main(){

int ar[6]={2,5,10,3,14,20};
sort (ar,6);
for(int i=0; i<6; i++){

    printf("%d ",ar[i]);
}


return 0;
}
