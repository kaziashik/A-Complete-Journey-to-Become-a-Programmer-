#include<stdio.h>

int main()

{


    int n, m;
    char a;

    scanf("%d %c %d",&n,&a,&m);

    if(a=='*'){
        printf("%d",n*m);
    }
   else if (a=='%'&&(m!=0)){
    printf("%d",n%m);
    }
    else if (a=='/'&&(m!=0)){
    printf("%d",n/m);
    }
    else {

        printf("can not divide by 0");
    }



}
