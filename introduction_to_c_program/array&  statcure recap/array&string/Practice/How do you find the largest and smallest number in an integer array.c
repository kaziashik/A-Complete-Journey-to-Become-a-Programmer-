
#include<stdio.h>
int main()
{

int n;
scanf("%d",&n);
    int ar[n], max,small;


    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
        max=small=ar[0];
    }

     for(int i=0; i<n; i++){

            if(ar[i]>max)
            {
                max=ar[i];
            }

            if(ar[i]<small)
            {
                small=ar[i];
            }

    }

    printf("MAX=%d\n ",max);
    printf("small=%d",small);


}
