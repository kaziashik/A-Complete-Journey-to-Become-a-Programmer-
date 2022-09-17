#include<stdio.h>

int get_max(int a, int b){
if(a<b)
    {
        return a;
    }

    else{
        return b;
    }
}
int main(){

    printf("%d",get_max(133,15));
}
