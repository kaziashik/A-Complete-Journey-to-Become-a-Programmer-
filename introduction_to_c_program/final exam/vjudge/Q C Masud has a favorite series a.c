
#include<stdio.h>
int main()
{
int t;
scanf("%d", &t);

while(t--)
{

    int n, i;

    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<n/2; i++)
    {

        printf(" %d %d", a[i], a[n-1-i]);
    }

    if(n%2==1)
        printf(" %d ",a[n/2]);

    printf("\n");
}


}
