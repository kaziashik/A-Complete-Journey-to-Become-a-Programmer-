#include<stdio.h>
#include<string.h>
int main()
{


    int n,count=0,count2=0;

    scanf("%d",&n);

    char ar[1000000],val;


        scanf("%s",&ar);


    for(int i=0;i<n; i++){
            val=ar[i];

            if(val=='n'){
                count++;
            }

             if(val=='z'){
                count2++;
            }
    }



    for(int i=0; i<count; i++){
        printf("1\n");
    }
    for(int i=0; i<count2; i++){
        printf("0\n");
    }




}
