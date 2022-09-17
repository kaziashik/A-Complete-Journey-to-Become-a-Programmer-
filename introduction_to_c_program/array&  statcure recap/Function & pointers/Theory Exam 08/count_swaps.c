#include<stdio.h>
   int count=0;
int count_swaps(int *a ,int n)
{
   for( int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++)
        {

            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                count ++;
            }
        }
    }
    return count;

}




int main()
{


    int ar[4]={4,3,2,1};

    int xx=count_swaps(ar ,4);
    for(int i=0; i<4; i++){
            printf("%d ",ar[i]);
    }

     printf("\nnumber of swaps : %d ",count);

}
