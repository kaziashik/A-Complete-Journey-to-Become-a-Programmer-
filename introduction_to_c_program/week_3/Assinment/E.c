#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,x,takah,aohi,num,num2,i;

    scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&x);
//    printf("%d%d%d%d%d%d%d",a,b,c,d,e,f,x);


int extradisAohi = 0;
 int time1=d+f;
  int dis1=d*e;
    int aohiMod = x%time1;
    if(aohiMod < d){
        extradisAohi = aohiMod * e;
    }else{
        extradisAohi = dis1;
    }

     aohi=(x/time1)*dis1 + extradisAohi;
int extradisTakah = 0;

 int time=a+c;
  int dis=a*b;
    int takahMod = x%time;
    if(takahMod < a){
        extradisTakah = takahMod * b;
    }else{
        extradisTakah = dis;
    }

    takah=(x/time)*dis +extradisTakah;




 if(takah>aohi){
    printf("Takahashi");
 }
 else if(aohi>takah){
    printf("Aoki");
 }
 else{
    printf("Draw");
 }


}

