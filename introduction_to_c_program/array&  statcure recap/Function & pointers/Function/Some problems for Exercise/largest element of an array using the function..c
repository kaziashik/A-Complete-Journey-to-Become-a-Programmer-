#include<stdio.h>

int max(int a[]){

    int i=1,maxnum;
    maxnum=a[0];
while(i<=5){
    if(maxnum<a[i]){
        maxnum=a[i];

    }

    i++;

}
return maxnum;
}


int main(){



    int ar[5]={12,4,6,25,5};
    int n=max(ar);

    printf("%d",n);



}
