
#include<stdio.h>
int main()

{
    /*char ar[100];
    scanf("%s",&ar);

    int index=0;
    while (ar[index]!='\0')
    {

        index++;
    }
    printf("%d",index);
    */
    char a[100],b[100];
    scanf("%s %s", &a, &b);
    int val=strcmp(a,b);
    printf("%d",val);
}
