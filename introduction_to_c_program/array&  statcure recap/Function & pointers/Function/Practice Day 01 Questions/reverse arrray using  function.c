
#include<stdio.h>

void get_length(int *a, int n){

    int i=0,j=n-1;

    while(i<j){
            int temp=a[i];
        a[i]=a[j];
         a[j]=temp;
         i++;
         j--;
    }

}





int main(){

int n;
scanf("%d",&n);
int ar[n];

    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }
    get_length(ar,n);

    for(int i=0; i<5; i++)
    {

        printf("%d ",ar[i]);
    }

    return 0;






}
