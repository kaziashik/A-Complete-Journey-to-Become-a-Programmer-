
#include<stdio.h>
int main()
{

    int t;
    scanf("%d", &t);

    while(t--)
    {

        int n, s[300], m, temp, i,j;
        scanf("%d",&n);

        for(i=0; i<n; i++)
        {

            scanf("%d",&s[i]);
        }


        m=abs(s[0]-s[1]);

        for(i=0; i<n-1; i++)
        {

            for(j=i+1; j<n; j++){
                temp=abs(s[i]-s[j]);
                if(temp<m)
                    m=temp;
            }
        }
        printf("%d\n",m);
    }
}
