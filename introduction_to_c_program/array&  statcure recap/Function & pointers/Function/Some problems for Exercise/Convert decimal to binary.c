
#include<stdio.h>

long toBin(int dno){

long bno=0,remainder,f=1;
while(dno !=0){
    remainder=dno %2;
bno = bno + remainder *f;
f=f*10;
dno=dno/2;}

return bno;
}
int main(){


int n;

scanf("%d",&n);

int x=toBin(n);

printf("%d",x);
}
