
#include<stdio.h>
#include<string.h>
char st[101] ,val;
int count=0, count1=0;

int main()
{
    scanf("%s",st);
    for(int i=0; i<=strlen(st); i++)
    {

        val=st[i];

        if(val!='1'){
        count=0;

       }
        if(val!='0'){
        count1=0;

       }

       if(val='1'){
            count++;
        if(val==st[i-1]){
       count++;
        }
       }
       if(count>=7){
            printf("YES");
       return 0;

       }



       if(val='0'){
            count1++;
        if(val==st[i-1]){
       count1++;
        }
       }
       if(count1>=7){
            printf("YES");
       return 0;

       }




    }

     printf("NO");



return 0;
}
