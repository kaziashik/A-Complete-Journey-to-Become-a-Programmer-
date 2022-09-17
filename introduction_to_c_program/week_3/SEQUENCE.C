#include<stdio.h>

int main()

{

    int n;
    scanf("%d",&n);
    getchar();

    int i;

    int plus=0,minus=0,max_ans=0;

    for(i=1;i<=n;i++)
    {


        char c;
        scanf("%c",&c);
        if(c=='+'){
                if(minus>max_ans){
                    max_ans=minus;
                }
                minus=0;
                plus++;
        }

        else{

                if(plus>max_ans){
                    max_ans=plus;
                }
                plus=0;
                minus++;
        }
    }

    if(plus>max_ans){
        max_ans=plus;
    }

    if(minus>max_ans){
        max_ans=minus;
    }

    printf("%d\n",max_ans);

}
