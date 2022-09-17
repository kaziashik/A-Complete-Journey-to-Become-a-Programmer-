
#include<stdio.h>
int main()

{


    int n, x=1, y=0;

    scanf("%d",&n);
    for(int i=1; i<=n; i++){

        if(i%2==0) {

        printf("%d",x);
        }

        else{
            printf("%d",y);
        }
    }
}
