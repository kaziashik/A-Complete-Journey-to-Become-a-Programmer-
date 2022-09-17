
#include<stdio.h>
int main()

{ int n,a,b,count=0,num;
    scanf("%d",&n);

for(int i=1; i<=n; i++){
        scanf("%d%d",&a,&b);
                if(a<b-1){
                      count++;

       }

}
printf("%d",count);

    return 0;
}
