#include<stdio.h>
int main()

{


    int n;

    scanf("%d",&n);


    int ar[n];

    for(int i=0; i<n; i++){

        scanf("%d",&ar[i]);
    }

    for(int i=0; i<n; i++){

        int value=ar[i];

        if(value%2= =0){
            printf("%d ",value);
        }
    }
}
