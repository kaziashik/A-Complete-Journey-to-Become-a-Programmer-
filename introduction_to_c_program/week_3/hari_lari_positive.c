#include<stdio.h>
int main()

{

    int n ,sum=0;

    char c;
    scanf("%c %d",&c,&n);

    for(int i=1; i<=n; i++){

        if(i%2==1){

                //bejor

            if(c=='H')
            {

                sum+=i;
            }
            else{
                sum-=i;
            }
        }



        else{
                //jor

            if(c=='H')
            {

                sum-=i;

            }
            else{
                sum+=i;
            }
        }
    }

    printf("%d",sum);



    return 0;
}
