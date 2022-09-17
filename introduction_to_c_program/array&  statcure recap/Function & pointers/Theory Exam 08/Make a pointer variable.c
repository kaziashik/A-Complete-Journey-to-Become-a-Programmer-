#include<stdio.h>
int main()
{


    int value=9,*p,**Q,***R;
     p=&value;

     Q=&p;
     R=&Q;

     ***R=5; //changeing the value


    printf("%d",value);
}
