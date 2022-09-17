

#include<stdio.h>
#include<string.h>

int main()

{

    int n;

    scanf("%d",&n);
    char ar[100];
    int sum=0;
    for(int i=0; i<n; i++){
        scanf("%s",&ar);

        if(ar[0]=='I'||ar[0]=='i') {
            sum=sum+20;
        }

         if(ar[0]=='C'||ar[0]=='c') {
            sum=sum+6;
        }


         if(ar[0]=='T'||ar[0]=='t') {
            sum=sum+4;
        }


         if(ar[0]=='o'||ar[0]=='O') {
            sum=sum+8;
        }
         if(ar[0]=='D'||ar[0]=='d') {
            sum=sum+12;
        }
    }

    printf("%d",sum);

    return 0;


}
