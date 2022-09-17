#include<stdio.h>
int main()
{

    int n, x, temp, result=0;
    scanf("%d%d", &n, &x);
    int arr[n];
    for(int i=0; i<n; i++)
    {

        scanf("%d",&arr[i]);
    }

    //sorting in ascending  order

    for( int i=0; i<n; i++){
        for( int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(int i=0; i<x; i++)
        if(arr[i]<0)
        result+=arr[i];

    printf("%d", abs(result));
    return 0;
}
