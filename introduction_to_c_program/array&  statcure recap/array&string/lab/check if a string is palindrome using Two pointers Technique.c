#include<stdio.h>
int main(){
char a[100];
scanf("%s",&a);
int i=0,j=strlen(a)-1;

int c=0;
while(i<j)
{

    if(a[i] != a[j])
    {

        printf("No\n");
        c=1;
        break;
    }

    i++;
    j--;
}

if(c==0){
    printf("Yes\n");
}
}
