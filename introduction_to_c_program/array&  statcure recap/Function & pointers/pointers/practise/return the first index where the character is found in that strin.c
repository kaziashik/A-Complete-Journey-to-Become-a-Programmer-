#include<stdio.h>
#include<stdbool.h>


char fine_firstIndex(char *a,char s){

    bool n=false;
for(int i=0; i<strlen(a); i++)
{


 int val=a[i];

 if(val==s)
 {

     printf("\nval=%d",i);
     n=true;
     return 0;
 }



}

if(n==false){

    printf("-1");

 }
}


int main(){

    char ch[100], n='a';

scanf("%s",&ch);

fine_firstIndex(ch,n);






}





