#include<stdio.h>
int main()
{
    int n,a,b,c,count=0,res;
    scanf("%d",&n);


    for(int i=0; i<n; i++){
        scanf("%d%d%d",&a,&b,&c);


        res=a+b+c;
        if(res>=2)
        {
            count++;
        }

    }
    printf("%d\n",count);



    return 0;
}
