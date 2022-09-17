#include<stdio.h>
int main()
{
    int n,m;
    int count=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){

        scanf("%d",&m);
        if(m%2==0){
            count+=m;

        }
    }
    printf("sum %d",count);
}

