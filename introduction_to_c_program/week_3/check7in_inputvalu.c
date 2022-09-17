#include<stdio.h>
int main()

{  int n,x,cnt=0;

    scanf("%d",&n);

    while(n>0){

    x=n%10;
        if(x==7){
            printf("yes");
            cnt++;
            break;
        }
        n=n/10;
    }
    if(cnt==0){
        printf("no\n");
    }


    return 0;
}
