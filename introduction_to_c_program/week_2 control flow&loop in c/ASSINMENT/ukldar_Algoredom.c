#include<stdio.h>
int main()

{
    int a,b;
    scanf("%d %d", &a,&b);



while(a !=0){
   int rem= b%a;
   b=a;

   a=rem; // here will sowap because b ar valu a ar mode insart hoya jai

   printf("%d %d\n", a,b);

}

printf("gcd=%d\n",b);

    return 0;
}

