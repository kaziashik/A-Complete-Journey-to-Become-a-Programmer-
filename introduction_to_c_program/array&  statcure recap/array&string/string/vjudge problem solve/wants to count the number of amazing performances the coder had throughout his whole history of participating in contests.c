
#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
    int ar[n],count=0;


    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }

     int max=ar[0],min=ar[0];

    for(int i=0; i<n; i++){

        if(i==0){
            continue;
        }

        else if(ar[i]>max){
            max=ar[i];
            count++;
        }
       else if(ar[i]<min){
            min=ar[i];
            count++;
        }
    }

    printf("%d",count);
}
