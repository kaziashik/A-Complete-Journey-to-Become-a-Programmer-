#include<stdio.h>
#include<string.h>


int main()
{


    int t,n;
    char ar[1000];
    scanf("%d",&t);

    while(t--)
    {

        scanf("%d",&n);

        scanf("%s",&ar);
        int len=n;

        if(len>11)
        {

            int flag=0;
             for(int t=len-11; t>=0;t--)
             {

                 if(ar[t]=='8'){
                    flag=1;
                    break;
                 }
             }

             if(flag){
                printf("YES");
             }


             else
             {

                 printf("NO");

             }
        }


        else if(len==11){
            if(ar[0]=='8'){
                printf("YES");
            }

            else
            {

                printf("NO");
            }
        }

        else
        {

            printf("NO");
        }

        printf("\n");


    }


}
