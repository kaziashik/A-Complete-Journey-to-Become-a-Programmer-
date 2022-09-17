#include<stdio.h>

int get_length(char ar[]){
int i=0, count=0;
while(ar[i]!=0){
    count++;
    i++;
}

return count;
}
int main(){

    char a[100];

    scanf("%s",&a);

    int x=get_length(a);
    printf("%d",x);

}
