
#include<stdio.h>
int main()

{
    int N,A=0,D=0;
    char AD;

    scanf("%d",&N);

    for(int i=1; i<=N; i++){
            scanf(" %c",&AD);
            if(AD=='A'){
                A++;
            }
            if(AD=='D'){
                D++;
            }


    }

     if(A>D){
        printf("Anton");
     }
      if(D>A){
        printf("Danik");
     }
     if(A==D){
        printf("Friendship");
     }



    return 0;
}
