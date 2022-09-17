
#include<stdio.h>

void get_length(char ar[], char ar2[]){
int i=0;

while(ar2[i]!=0){
        ar[i]=ar2[i];

    i++;
}
        printf("%s",ar);


}
int main(){

    char a[100],b[100];

    scanf("%s",&b);

  get_length(a,b);


}
