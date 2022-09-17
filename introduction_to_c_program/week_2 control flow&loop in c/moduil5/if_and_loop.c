#include<stdio.h>
int main()

{
int n=100;
int count =0;
     for (int i=1; i<=n; i++)
        {

    if( n%i==0){

        printf("%d\n",i);
        count++;
    }
}
printf("Number of divisors = %d\n", count);


    return 0;
}
