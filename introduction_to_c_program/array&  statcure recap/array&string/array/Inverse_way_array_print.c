
#include<stdio.h>

int main()
{


    int ar[6]={2,1,0,-5,10,5};
     int sum=0;
    int max=ar[5];
    int min=ar[5];

    for(int i=5; i>0;i--)
    {

        printf("%d\n",ar[i]);

        int val=ar[i];
        sum=sum+val;


        if(val>max){
            max=val;
        }

        if(val<min){
            min=val;
        }
    }

    printf("%d\n",sum);
     printf("%d\n",max);
      printf("%d\n",min);

}


