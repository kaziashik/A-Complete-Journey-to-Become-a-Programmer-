
#include<stdio.h>
#include<stdbool.h>
int main()
{

int n;
scanf("%d",&n);
    char ar[n];

        scanf("%s",&ar);

    int val;


 int count[26]={0};



    for(int i=0; i<strlen(ar); i++){

            if(ar[i]>='A'&&ar[i]<='Z'){
                char val=ar[i];
            count[val-'A']=1;
            }

             else if(ar[i]>='a'&&ar[i]<='z'){
                char val=ar[i];
            count[val-'a']=1;
            }

    }



    for( val='a'; val<='z'; val++){


            if(count[val-'a']==0){
                printf("NO");
                return 0;            }


                }

                printf("YES");

    }



