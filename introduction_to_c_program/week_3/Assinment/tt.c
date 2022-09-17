
#include<stdio.h>
int main()

{
    int x;

    scanf("%d",&x);

    int sum=0;

    while(x>0){
        int digit =x%10;
        x/=10;
        printf("digit = %d , x=%d\n",digit,x);
    }



    char c="2"*"3";
    printf("%c",c);

    return 0;
}
