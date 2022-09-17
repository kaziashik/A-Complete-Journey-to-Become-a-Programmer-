#include<stdio.h>
int main()
{

    char ch[101];
    int n;
    scanf("%s",&ch);
n=strlen(ch);
for(int i=0;i<n;i++){

        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='o'||ch[i]=='i'||ch[i]=='u')
    printf("%d",i);
}


}
