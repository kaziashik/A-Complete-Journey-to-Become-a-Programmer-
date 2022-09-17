
#include<stdio.h>
int main()
{

    int n=0;



    for(int i=2; i<=100; i+=3){
            n+=i;
        printf(" %d\n",i);
    }
    printf(" sum: %d\n",n);
}

