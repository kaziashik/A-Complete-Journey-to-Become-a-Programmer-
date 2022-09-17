
#include<stdio.h>

int main()
{


    int s,val,count[100]={0}, cout=0;
    char ar[100];
    //scanf("%d",&n);

        scanf("%s",&ar);



    for(int i=0; i<strlen(ar); i++){
         val=ar[i];

        count[val-'0']=1;

        if(count[val-'0']==1){
            cout+=val-'0';
        }


    }

     printf("\n%d",cout);




}
