#include<stdio.h>
#include<stdbool.h>
int main()
{


    char ar[100];
    int chara=0;
    int chara2=0;
    int chara3=0;
    gets(ar);
 int count[26]={0};
 int val=0;
    for(int i=0; i<strlen(ar); i++){

            if(ar[0]=='{'){
             chara2=1;
            }
            if(ar[sizeof(ar)/sizeof(ar[0])-1]=='}'){
             chara3=1;
            }
            if(ar[i]==','&&ar[i]==' '){
                chara=1;
            }



                    int val=ar[i];
            count[val-'a']++;

    }

    for(int i=0; i<26; i++){
        if(count[i]!=0 ){
                if(chara==1 &&chara2==1&&chara3==1){

                               val++;



                }
                }






    }
    printf("\n%d",val);








}
