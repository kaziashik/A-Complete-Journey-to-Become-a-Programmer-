
#include<stdio.h>
int main()

{
    int a;
    scanf("%d", &a);
    if(a<0){
        printf("you anter a negative number");
    }
    else if(a==0)
        {
        printf("you enter 0");
    }
    else{
        printf("positive");
    }

    return 0;
}
