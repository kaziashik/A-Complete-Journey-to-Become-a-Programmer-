#include<stdio.h>

struct Fun
{
    int sum;
};

int main()
{
    struct Fun *a, b;
    a=&b;

    scanf("%d",&a->sum);






    printf("%d",a->sum);
}
