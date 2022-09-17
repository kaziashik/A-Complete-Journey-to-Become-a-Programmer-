#include<stdio.h>
int main()
{
    int a,b,c,d,f,g;

    scanf("%d %d %d",&a,&b,&c);
    d=b+c;
    f=c+a;
    g=a+b;

   if(d<=f&&d<=g){
    printf("%d",d);
   }

    else if(f<=g&&f<d){
    printf("%d",f);
   }
  else{
    printf("%d",g);
  }

    return 0;
}


