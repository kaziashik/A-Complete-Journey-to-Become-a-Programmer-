
#include<stdio.h>
int main()

{ int a,b,x;
    scanf("%d %d %d",&a,&b,&x);



//x+=0.5;

 if(b==0)
 {

     b+=24;
 }
if(a>b){
        b=b+24;
}
if(a > x){

        x=x+24;
}

if(x>=a&&b>x){
    printf("Yes");
}
else{
    printf("No");
}


    return 0;
}
