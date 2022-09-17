#include<stdio.h>
int main()

{ int n;
    scanf("%d",&n);


    for(int i=1; i<n; i++){


                if(i%2 !=0){
                    printf("I hate that");
                }



            if(i%2==0){
//                    printf("%d",i);

                printf("I love that");
            }


            printf(" ");
    }



            if(n%2 !=0){
                printf("I hate it");
            }
             if(n%2==0){
                printf("I love it");
            }

    return 0;
}
