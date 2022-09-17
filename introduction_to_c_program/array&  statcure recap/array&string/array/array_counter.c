#include<stdio.h>

int main(){

int n;
scanf("%d",&n);

int ar[n];
for(int i=0; i<n; i++){
    scanf("%d",&ar[i]);

}

int count[101]={0};  //array start from 0 so if i write 11 it mean 10

for(int i=0; i<n; i++)
{

    int val=ar[i];
    count[val]++;
}

for(int val=0; val<=100; val++){

if(count[val]>0){
     printf("value-> %d, count-> %d\n",val,count[val]);
}

}

}
