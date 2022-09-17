#include<stdio.h>

int main(){
int size;

scanf("%d",&size);

int ar[size];

for(int i=0; i<=size; i++){
   scanf("%d",&ar[i]);
}
int count=0;
for(int i=0; i<=size; i++){
   int val=ar[i];
   if(val==2){
    count++;
   }
}

printf("%d ",count);
}
