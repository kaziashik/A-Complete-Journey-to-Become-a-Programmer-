#include<stdio.h>

int prime(int a){
int i=2;

while(i<=a-1)
{

    if(a%i==0)
    {
     return 0;

    }


    else{
        i++;
    }

}

return 1;

}
int main()
{
    int n;
 scanf("%d",&n);
 int prim=prime(n);

 if(prim==1) {
    printf("The number %d is prime number.\n",n);
 }

 else
 {

       printf("The number %d is not prime number\n",n);
 }

 return 0;
}
