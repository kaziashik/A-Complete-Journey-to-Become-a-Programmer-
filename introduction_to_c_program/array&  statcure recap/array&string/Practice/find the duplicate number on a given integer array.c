

#include<stdio.h>
int main()
{


    int n;
    int value;
    scanf("%d",&n);

    int ar[n];

    for(int i=0; i<n; i++)
    {

        scanf("%d",&ar[i]);
    }
     for(int i=0; i<n; i++)
    {
         for(int j=i; j<n; j++)

         {



        if(ar[i]==ar[j])
        {

            value++;
            break;
        }

         }

    }

    printf("%d",value);


}
