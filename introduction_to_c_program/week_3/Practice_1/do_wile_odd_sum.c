#include<stdio.h>
int main()
{
    int sum=0, i=0;

    do{

        i++;

        if(i%2!=0){
                printf("%d\n",i);
            sum+=i;
        }
    }
    while(i<=29);
        printf("%d\n",sum);


    return 0;
}
