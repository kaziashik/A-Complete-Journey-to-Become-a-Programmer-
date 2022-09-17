#include<stdio.h>

int reverse(int *a, int n){

int i=0,j=n-1;

while(i<j){
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    i++;
    j--;
}

}

int main()
{

    int ar[]={10,3,5,2};
    reverse(ar,4);



    for(int i=0; i<4; i++)
    printf("%d ",ar[i]);
    }






