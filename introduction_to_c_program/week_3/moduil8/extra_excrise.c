#include<stdio.h>
int main(){

int n, number, a,b;
scanf("%d",&n);

for(int i=0; i<=n; i++){
    scanf("%d",&a,&b);

    for(int  j=1; j<=a && j<=b; j++){
        printf("%d %d",j);
    }
}

}
