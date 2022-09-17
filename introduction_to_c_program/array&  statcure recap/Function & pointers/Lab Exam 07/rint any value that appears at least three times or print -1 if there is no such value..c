#include<stdio.h>
#include<string.h>

int main()
{


    int n,s,val,co=0;
    scanf("%d",&n);
    int i=0;

    while(i<n)
    {

        int count[200001]= {0};
        int h;
        scanf("%d",&h);
        int ar[h];

        for(int j=0; j<h; j++)
        {
            scanf("%d",&ar[j]);
        }



        for(int j=0; j<h; j++)
        {
            val=ar[j];

            count[val]++;


        }
        int co=0;
        for(int v=0; v<=h; v++)
        {

            if(count[v]>=3)
            {
                printf("%d",v);
                co++;
                break;

            }
        }

        if(co==0)
        {
            printf("-1");

        }
         printf("\n");

         i++;



    }
}
