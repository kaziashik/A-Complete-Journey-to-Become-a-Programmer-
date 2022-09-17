#include<stdio.h>
float make_average(int ar[], int n)
{
    int count=0;
for(int i=0; i<n; i++)
    {
        count+=ar[i];
    }
   float average = (float)count/n;
         return average;
}
int main()
{
    int n;
    scanf("%d",&n);

    int ar[n];

    for(int i=0; i<n; i++)
    {

        scanf("%d",&ar[i]);
    }

    float  average1=make_average(ar, n);

        printf("avarage=%.2f ",average1);
}

