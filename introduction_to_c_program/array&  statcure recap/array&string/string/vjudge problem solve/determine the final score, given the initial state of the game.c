

#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
    int ar[n],ar2[n],ar3[n],i,j,sum1=0,sum2=0;
    for(int i=0,j=0; i<n; i++, j++)
    {

      scanf("%d",&ar[i]);


        int sum1=sum1+ar2[i];
         int sum2=sum2+ar3[j];
}

int max=ar[0],max2=ar[0],count=0,count2=0;
for(int i=0; i<n; i++)
 if(i%2!=0){
        for(i=0; i<n; i++)
        {
            if(max>ar[i]){
                max=ar[i];
                count+=max;

            }
        }

      }
      else{
            for(i=0; i<n; i++)
        {
            if(max>ar[i]){
                max2=ar[i];
                count2+=max2;

            }
        }

      }


  printf("%d  ",count);



}

