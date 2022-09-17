
#include<stdio.h>
int main()
{
    double sum=0, A,B;
    int N;

    scanf("%d",&N);

for (int i=1;i<=N;i++){
scanf("%lf%lf",&A,&B);
sum +=A*B;
}
//s
printf("%lf\n",sum);

    return 0;
}



