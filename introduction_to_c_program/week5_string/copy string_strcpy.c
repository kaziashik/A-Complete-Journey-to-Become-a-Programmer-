#include<stdio.h>
#include<string.h>

int main()

{


 char str[]="hellowooooo";
 char str2[10];




strncpy(str2,str,7);
str2[7]='\0';

 printf("%s", str2);

}
