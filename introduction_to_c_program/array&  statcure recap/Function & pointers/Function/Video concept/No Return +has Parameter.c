#include<stdio.h>

void check_char(char input[],char ch)
{
 for(int i=0; i<strlen(input); i++){
    char val=input[i];
    if(val==ch)
    {

        printf("YES\n");
        return;
    }
 }

 printf("NO\n");

}
int main()
{

    char a[]="hellowbaoe",b[]="world";
    char c='o';
    check_char(a,c);
    return 0;
}
