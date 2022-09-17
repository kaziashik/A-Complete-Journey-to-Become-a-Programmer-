

#include<stdio.h>
#include<stdbool.h>
char s[100],st[100];
char n,count=0, count1=0,val;
bool t=false;
int main()
{
   scanf("%s",&st);




    if(st[0]>='a'&&st[0]<='z'){
            for(int i=0; i<strlen(st); i++)
   {
            if(st[i]>='A'&&st[i]<='Z'){
       count++;
            }

            if(count==strlen(st)-1){
                t=true;
            }
   }
    }




    if(t==true){
            st[0]-=32;

for(int i=1; i<strlen(st); i++){

    if(st[i]>='A'&&st[i]<='Z'){

      st[i]+=32;
    }
    else {

     st[i]-=32;
    }


            }
    }


         else{

   for(int i=0; i<strlen(st); i++)
   {


       if(st[i]>='A'&&st[i]<='Z'){

            count1++;
            if(count1==strlen(st)){

                    for(int i=0; i<strlen(st); i++){
                      st[i]+=32;
                    }

            }
       }


       }

   }

   for(int i=0; i<strlen(st); i++)
   {
       printf("%c",st[i]);
   }



return 0;
}
