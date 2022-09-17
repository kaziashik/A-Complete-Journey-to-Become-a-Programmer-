#include<stdio.h>

int sum_of_arry(int *a, int n)

{

    int count= 0;
for(int i=0; i<n; i++){


    count+=a[i];
}
 return count;
}
int  main(){

    int a[7]={3,4,6,2,3,5};

    int y=sum_of_arry(a,7);

    printf("%d",y);



}
