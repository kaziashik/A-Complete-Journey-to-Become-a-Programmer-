#include<stdio.h>
int main()
{

    long long n, b,c,mod;
    while(scanf("%lld",&n) !=EOF)


    {

        long long lcm=1;
    long long inter;

    //a*b=gcd(a,b)*lcm(a,b)

    //lcm(a,b) = a*b/gcd*a,b)

    for(int i=1; i<=n ; i++) {

        scanf("%lld",&b);

        inter=lcm*b;


        long long x, y;

        x=lcm;
        y=b;

        while(y!=0)
        {
            mod=x%y;
            x=y;
            y=mod;
        }
        lcm= inter/x;
    }


    }

}
