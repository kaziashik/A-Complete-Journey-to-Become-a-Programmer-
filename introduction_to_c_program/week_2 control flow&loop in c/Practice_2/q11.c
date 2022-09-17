#include<stdio.h>
int main()
{
    int n, m;
    scanf("%d %d",&n,&m);
    for(int n=0; n<=m; n++){
            if(n%n==0&&n/m==0){

        printf("%d %d",n,m );

            }

    }
}
