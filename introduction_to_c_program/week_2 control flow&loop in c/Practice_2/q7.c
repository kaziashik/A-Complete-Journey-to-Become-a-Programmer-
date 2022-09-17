#include<stdio.h>
int main()
{
    int n,m,p;
    scanf("%d %d %d",&n,&m,&p);

    if(n==m&&n==p&&m==p)
    {

        printf("This is an Equilateral triangle.");
    }
    else if(n==m || m==p||n==p)
    {

        printf("This is an isosceles triangle.");
    }
    else{
        printf("This is an Scalene triangle.");
    }

    }
